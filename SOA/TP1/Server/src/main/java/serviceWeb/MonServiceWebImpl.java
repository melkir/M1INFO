package serviceWeb;

import javax.jws.WebService;

@WebService (endpointInterface = "serviceWeb.MonServiceWeb")
public class MonServiceWebImpl implements MonServiceWeb {
    public void createEntity() {
        System.out.println("Hello world");
    }

    public void printStatus() {
        System.out.println("Client send a request, server is OK !");
    }

}
