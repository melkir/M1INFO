package com.efrei;


import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.EntityTransaction;
import javax.persistence.Persistence;
import java.util.Calendar;

public class App {
    public static void main(String[] args) {
        /* Initialisation */
        EntityManagerFactory emf = Persistence.createEntityManagerFactory("manager1");
        EntityManager em = emf.createEntityManager();
        EntityTransaction tx = em.getTransaction();
        tx.begin();

        /* Creation d'une personne */
        Person p = new Person();
        p.setName("Tintin");

        /* Creation d'une location */
        Rent r = new Rent();

        Calendar cal = Calendar.getInstance();
        r.setBegin(cal.getTime());  // Date de debut
        cal.set(Calendar.DAY_OF_MONTH, 15);
        r.setEnd(cal.getTime());    // Date de fin

        p.addRent(r); // Ajout d'une location pour Tintin

        /* Persistance de Tintin et de la location */
        em.persist(r);
        em.persist(p);

        /* Creation d'une voiture */
        Car car = new Car();
        car.setNumberOfSeats(5);
        car.setPlateNumber("EE 15 ERR");

        car.addRent(r); // Ajout d'une location au vehicule

        em.persist(car); // Persistance du vehicule

        tx.commit(); // Sauvegarde des modifications sur la BDD

        /* Test sur la BDD */
        Car car1 = em.find(Car.class, "EE 15 ERR");
        System.out.println(car1);
        Person p1 = (Person) em.createQuery("select p from Person p where p.name like 'Tintin'").getSingleResult();
        System.out.println(p1);
    }
}
