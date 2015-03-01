package model;

public class PlatformManager {
    String agentName, resultText;
    boolean isProvider, isSeeker;
    
    public String getAgentName() {
        return agentName;
    }

    public void setAgentName(String agentName) {
        this.agentName = agentName;
    }

    public String getResultText() {
        return resultText;
    }

    public void setResultText(String resultText) {
        this.resultText = resultText;
    }

    public boolean isProvider() {
        return isProvider;
    }

    public void setProvider(boolean isProvider) {
        this.isProvider = isProvider;
    }

    public boolean isSeeker() {
        return isSeeker;
    }

    public void setSeeker(boolean isSeeker) {
        this.isSeeker = isSeeker;
    }

}
