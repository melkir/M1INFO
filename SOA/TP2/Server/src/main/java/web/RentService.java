package web;

import dto.CarDTO;
import org.springframework.hateoas.ResourceSupport;
import org.springframework.http.HttpStatus;
import org.springframework.web.bind.annotation.*;

import java.util.List;

public interface RentService {

    @RequestMapping(value = "/entryPoint", method = RequestMethod.GET)
    @ResponseStatus(HttpStatus.OK)
    @ResponseBody
    public ResourceSupport get();

    /**
     * @return all cars not rented
     */
    @RequestMapping(value = "/car", method = RequestMethod.GET)
    @ResponseStatus(HttpStatus.OK)
    @ResponseBody
    public List<CarDTO> getCars();

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
    public CarDTO getCar(@PathVariable("plateNumber") String plateNumber) throws Exception;

    /**
     * Rent a car.
     *
     * @param plateNumber
     * @return car specifications
     * @throws Exception no car with this plate number or already rented
     */
    @RequestMapping(value = "/car/{plateNumber}", method = RequestMethod.DELETE)
    @ResponseStatus(HttpStatus.OK)
    public void rentCar(@PathVariable("plateNumber") String plateNumber) throws Exception;

    /**
     * * @return actions to be done
     *
     * @throws Exception no car with this plate number or not rented
     */
    @RequestMapping(value = "/car/{plateNumber}", method = RequestMethod.PUT)
    @ResponseStatus(HttpStatus.OK)
    public void renderCar(@PathVariable("plateNumber") String plateNumber) throws Exception;
}
