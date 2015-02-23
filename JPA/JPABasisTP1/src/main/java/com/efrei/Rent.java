package com.efrei;

import javax.persistence.*;
import java.util.Date;

@Entity
public class Rent {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    private int id;
    @Temporal(TemporalType.DATE)
    private Date date_begin, date_end;
    @ManyToOne
    private Person person; /* Foreign Key */
    @ManyToOne
    private Vehicule vehicule; /* Foreign Key */

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public Vehicule getVehicule() {
        return vehicule;
    }

    public void setVehicule(Vehicule vehicule) {
        this.vehicule = vehicule;
    }

    public Person getPerson() {
        return person;
    }

    public void setPerson(Person person) {
        this.person = person;
    }

    public Date getEnd() {
        return date_end;
    }

    public void setEnd(Date end) {
        this.date_end = end;
    }

    public Date getBegin() {
        return date_begin;
    }

    public void setBegin(Date begin) {
        this.date_begin = begin;
    }

}
