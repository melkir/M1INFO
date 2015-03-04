package serviceWeb;

import javax.jws.WebMethod;
import javax.jws.WebService;

@WebService
public interface MonServiceWeb {
    @WebMethod
    public void createEntity();
    @WebMethod
    public void printStatus();
}
