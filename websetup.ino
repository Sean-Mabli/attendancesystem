void Websetup() {
  String content = "<style>table {font-family: arial, sans-serif;border-collapse: collapse;width: 65%;}td, th {border: 1px solid #000000;text-align: left;padding: 10px;}background-color: lightblue;</style>";
  content += "<html><body><H2> RFID Attendance System </H2><H3>Last Class End Time: " + Last_Class_End_Time + " Current Class Start Time: " + Current_Class_Start_Time + "</H3>";
  content += "<table><tr><th>Name</th><th>Attendance to Class</th><th>Time Scaned</th></h></tr>";
  content += "<tr><td>" + Student_1 + "</td><td style=background-color:" + Student_1_Class_Color + ";>" + Student_1_Class + "</td><td style=background-color:" + Student_1_Class_Color + ";>" + Student_1_Class_Time + "</td></tr>";
  content += "<tr><td>" + Student_2 + "</td><td style=background-color:" + Student_2_Class_Color + ";>" + Student_2_Class + "</td><td style=background-color:" + Student_2_Class_Color + ";>" + Student_2_Class_Time + "</td></tr>";
  content += "<tr><td>" + Student_3 + "</td><td style=background-color:" + Student_3_Class_Color + ";>" + Student_3_Class + "</td><td style=background-color:" + Student_3_Class_Color + ";>" + Student_3_Class_Time + "</td></tr>";
  content += "<head><meta http-equiv=refresh content=0.5></head>";
  server.send(200, "text/html", content);
}