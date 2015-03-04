package web;

import dto.CarDTO;
import model.Car;
import org.springframework.hateoas.ResourceSupport;
import org.springframework.http.HttpStatus;
import org.springframework.stereotype.Component;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.*;

import java.util.ArrayList;
import java.util.List;

@Controller
@Component
public class MyRentController implements RentService {

    List<Car> cars = new ArrayList<Car>();

    public MyRentController() {
        Car car1 = new Car();
        car1.setPlateNumber("AA11AA");
        car1.setRented(true);

        cars.add(car1);

        Car car2 = new Car();
        car2.setPlateNumber("BB22BB");
        car2.setRented(false);

        cars.add(car2);
    }

    @Override
    @RequestMapping(value = "/entryPoint", method = RequestMethod.GET)
    @ResponseStatus(HttpStatus.OK)
    @ResponseBody
    public ResourceSupport get() {
        // TODO Auto-generated method stub
        return null;
    }

    /**
     * @return all cars not rented
     */
    @Override
    @RequestMapping(value = "/car", method = RequestMethod.GET)
    @ResponseStatus(HttpStatus.OK)
    @ResponseBody
    public List<CarDTO> getCars() {
        List<CarDTO> dtos = new ArrayList<CarDTO>();
        for (Car car : cars) if (!car.isRented()) dtos.add(new CarDTO(car));
        return dtos;
    }

    /**
     * Return specifications of a car.
     *
     * @param plateNumber
     * @return car specifications only (if not rented)
     * @throws Exception no car with this plate number or already rented
     */
    @RequestMapping(value = "/car/{plateNumber}", method = RequestMethod.GET)
    @ResponseStatus(HttpStatus.OK)
    @ResponseBody
    @Override
    public CarDTO getCar(@PathVariable("plateNumber") String plateNumber) throws Exception {
        int i = 0;
        while (i < cars.size() && !cars.get(i).getPlateNumber().equals(plateNumber)) i++;
        if (i < cars.size()) return new CarDTO(cars.get(i));

        throw new Exception("No car with such a plate number");
    }

    /**
     * Rent a car.
     *
     * @param plateNumber
     * @return car specifications
     * @throws Exception no car with this plate number or already rented
     */
    @RequestMapping(value = "/car/{plateNumber}", method = RequestMethod.DELETE)
    @ResponseStatus(HttpStatus.OK)
    @Override
    public void rentCar(@PathVariable("plateNumber") String plateNumber) throws Exception {
        int i = 0;
        while (i < cars.size() && !cars.get(i).getPlateNumber().equals(plateNumber)) i++;

        if (i < cars.size()) {
            if (cars.get(i).isRented()) throw new Exception("Car already rented");
            else cars.get(i).setRented(true);
        }

        throw new Exception("No car with such a plate number");
    }

    /**
     * * @return actions to be done
     *
     * @throws Exception no car with this plate number or not rented
     */
    @RequestMapping(value = "/car/{plateNumber}", method = RequestMethod.PUT)
    @ResponseStatus(HttpStatus.OK)
    @Override
    public void renderCar(String plateNumber) throws Exception {
        int i = 0;
        while (i < cars.size() && !cars.get(i).getPlateNumber().equals(plateNumber)) i++;

        if (i < cars.size()) {
            if (!cars.get(i).isRented()) throw new Exception("Can not get back a no rented car");
            else cars.get(i).setRented(false);
        }

        throw new Exception("No car with such a plate number");
    }


}
