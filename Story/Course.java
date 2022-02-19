public class Course {

    private String courseName = "Java I";
    private String courseCode = "DT196G";
    private String coursePoint = "7,5 hp";
    private String description = "En kurs i Java I, given på Mittuniversitetet.";

    public void setName(String courseName) {
        this.courseName = courseName;
    }
    public void setCode(String courseCode) {
        this.courseCode = courseCode;
    }
    public void setPoint(String coursePoint) {
        this.coursePoint = coursePoint;
    }
    public void setDescription(String description) {
        this.description = description;
    }

    void printInfo() {
        System.out.println(courseName + ", " +  courseCode + ", " + coursePoint);
        System.out.println(description);
    }
}