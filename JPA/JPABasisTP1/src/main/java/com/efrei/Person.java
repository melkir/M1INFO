package com.efrei;

import javax.persistence.*;
import java.util.ArrayList;
import java.util.Collection;

@Entity
public class Person {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    private int id;
    private String name;
    @OneToMany(mappedBy = "person")
    private Collection<Rent> rents = new ArrayList<Rent>();

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public Collection<Rent> getRents() {
        return rents;
    }

    public void setRents(Collection<Rent> rents) {
        this.rents = rents;
    }

    public void addRent(Rent r) {
        rents.add(r);
        r.setPerson(this);
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
}
