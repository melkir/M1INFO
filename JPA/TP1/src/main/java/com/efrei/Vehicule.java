package com.efrei;

import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.OneToMany;
import java.util.ArrayList;
import java.util.Collection;

@Entity
public abstract class Vehicule {
    @Id
    private String plateNumber;
    @OneToMany(mappedBy = "vehicule")
    private Collection<Rent> rents = new ArrayList<Rent>();

    public Collection<Rent> getRents() {
        return rents;
    }

    public void setRents(Collection<Rent> rents) {
        this.rents = rents;
    }

    public void addRent(Rent r) {
        rents.add(r);
        r.setVehicule(this);
    }

    public String getPlateNumber() {
        return plateNumber;
    }

    public void setPlateNumber(String plateNumber) {
        this.plateNumber = plateNumber;
    }
}
