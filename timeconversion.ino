void Time_Conversion() {
  timeClient.update();
  Current_Time = timeClient.getFormattedTime();

  if (Current_Time.substring(0, 2) == "01") {
    Current_Time.remove(0, 1);
    Current_Time.remove(4);
    Current_Time += " AM";
    Current_Time_ID = Current_Time.substring(2, 4);
    Current_Time_ID = 1 * 60 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "02") {
    Current_Time.remove(0, 1);
    Current_Time.remove(4);
    Current_Time += " AM";
    Current_Time_ID = Current_Time.substring(2, 4);
    Current_Time_ID = 2 * 60 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "03") {
    Current_Time.remove(0, 1);
    Current_Time.remove(4);
    Current_Time += " AM";
    Current_Time_ID = Current_Time.substring(2, 4);
    Current_Time_ID = 3 * 60 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "04") {
    Current_Time.remove(0, 1);
    Current_Time.remove(4);
    Current_Time += " AM";
    Current_Time_ID = Current_Time.substring(2, 4);
    Current_Time_ID = 4 * 60 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "05") {
    Current_Time.remove(0, 1);
    Current_Time.remove(4);
    Current_Time += " AM";
    Current_Time_ID = Current_Time.substring(2, 4);
    Current_Time_ID = 5 * 60 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "06") {
    Current_Time.remove(0, 1);
    Current_Time.remove(4);
    Current_Time += " AM";
    Current_Time_ID = Current_Time.substring(2, 4);
    Current_Time_ID = 6 * 60 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "07") {
    Current_Time.remove(0, 1);
    Current_Time.remove(4);
    Current_Time += " AM";
    Current_Time_ID = Current_Time.substring(2, 4);
    Current_Time_ID = 7 * 60 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "08") {
    Current_Time.remove(0, 1);
    Current_Time.remove(4);
    Current_Time += " AM";
    Current_Time_ID = Current_Time.substring(2, 4);
    Current_Time_ID = 8 * 60 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "09") {
    Current_Time.remove(0, 1);
    Current_Time.remove(4);
    Current_Time += " AM";
    Current_Time_ID = Current_Time.substring(2, 4);
    Current_Time_ID = 9 * 60 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "10") {
    Current_Time.remove(5);
    Current_Time += " AM";
    Current_Time_ID = Current_Time.substring(3, 5);
    Current_Time_ID = 10 * 60 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "11") {
    Current_Time.remove(5);
    Current_Time += " AM";
    Current_Time_ID = Current_Time.substring(3, 5);
    Current_Time_ID = 11 * 60 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "12") {
    Current_Time.remove(5);
    Current_Time += " PM";
    Current_Time_ID = Current_Time.substring(3, 5);
    Current_Time_ID = 12 * 60 + 720 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "13") {
    Current_Time.remove(0, 2);
    Current_Time = "1" + Current_Time;
    Current_Time.remove(4);
    Current_Time += " PM";
    Current_Time_ID = Current_Time.substring(3, 5);
    Current_Time_ID = 1 * 60 + 720 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "14") {
    Current_Time.remove(0, 2);
    Current_Time = "2" + Current_Time;
    Current_Time.remove(4);
    Current_Time += " PM";
    Current_Time_ID = Current_Time.substring(3, 5);
    Current_Time_ID = 2 * 60 + 720 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "15") {
    Current_Time.remove(0, 2);
    Current_Time = "3" + Current_Time;
    Current_Time.remove(4);
    Current_Time += " PM";
    Current_Time_ID = Current_Time.substring(3, 5);
    Current_Time_ID = 3 * 60 + 720 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "16") {
    Current_Time.remove(0, 2);
    Current_Time = "4" + Current_Time;
    Current_Time.remove(4);
    Current_Time += " PM";
    Current_Time_ID = Current_Time.substring(3, 5);
    Current_Time_ID = 4 * 60 + 720 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "17") {
    Current_Time.remove(0, 2);
    Current_Time = "5" + Current_Time;
    Current_Time.remove(4);
    Current_Time += " PM";
    Current_Time_ID = Current_Time.substring(3, 5);
    Current_Time_ID = 5 * 60 + 720 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "18") {
    Current_Time.remove(0, 2);
    Current_Time = "6" + Current_Time;
    Current_Time.remove(4);
    Current_Time += " PM";
    Current_Time_ID = Current_Time.substring(3, 5);
    Current_Time_ID = 6 * 60 + 720 + Current_Time_ID.toInt();

  }
  if (Current_Time.substring(0, 2) == "19") {
    Current_Time.remove(0, 2);
    Current_Time = "7" + Current_Time;
    Current_Time.remove(4);
    Current_Time += " PM";
    Current_Time_ID = Current_Time.substring(3, 5);
    Current_Time_ID = 7 * 60 + 720 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "20") {
    Current_Time.remove(0, 2);
    Current_Time = "8" + Current_Time;
    Current_Time.remove(4);
    Current_Time += " PM";
    Current_Time_ID = Current_Time.substring(3, 5);
    Current_Time_ID = 8 * 60 + 720 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "21") {
    Current_Time.remove(0, 2);
    Current_Time = "9" + Current_Time;
    Current_Time.remove(4);
    Current_Time += " PM";
    Current_Time_ID = Current_Time.substring(3, 5);
    Current_Time_ID = 9 * 60 + 720 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "22") {
    Current_Time.remove(0, 2);
    Current_Time = "10" + Current_Time;
    Current_Time.remove(5);
    Current_Time += " PM";
    Current_Time_ID = Current_Time.substring(3, 5);
    Current_Time_ID = 10 * 60 + 720 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "23") {
    Current_Time.remove(0, 2);
    Current_Time = "11" + Current_Time;
    Current_Time.remove(5);
    Current_Time += " PM";
    Current_Time_ID = Current_Time.substring(3, 5);
    Current_Time_ID = 11 * 60 + 720 + Current_Time_ID.toInt();
  }
  if (Current_Time.substring(0, 2) == "24") {
    Current_Time.remove(0, 2);
    Current_Time = "12" + Current_Time;
    Current_Time.remove(5);
    Current_Time += " AM";
    Current_Time_ID = Current_Time.substring(3, 5);
  }
}
void Last_Class_End_Time_Convertion() {
  if (Last_Class_End_Time.substring(0, 1) == "1") {
    Last_Class_End_Time_ID = Last_Class_End_Time.substring(2, 4);
    Last_Class_End_Time_ID = 1 * 60 + Last_Class_End_Time_ID.toInt();
    if (Last_Class_End_Time.substring(5, 7) == "PM") {
      Last_Class_End_Time_ID = 720 + Last_Class_End_Time_ID.toInt();
    }
  }
  if (Last_Class_End_Time.substring(0, 1) == "2") {
    Last_Class_End_Time_ID = Last_Class_End_Time.substring(2, 4);
    Last_Class_End_Time_ID = 2 * 60 + Last_Class_End_Time_ID.toInt();
    if (Last_Class_End_Time.substring(5, 7) == "PM") {
      Last_Class_End_Time_ID = 720 + Last_Class_End_Time_ID.toInt();
    }
  }
  if (Last_Class_End_Time.substring(0, 1) == "3") {
    Last_Class_End_Time_ID = Last_Class_End_Time.substring(2, 4);
    Last_Class_End_Time_ID = 3 * 60 + Last_Class_End_Time_ID.toInt();
    if (Last_Class_End_Time.substring(5, 7) == "PM") {
      Last_Class_End_Time_ID = 720 + Last_Class_End_Time_ID.toInt();
    }
  }
  if (Last_Class_End_Time.substring(0, 1) == "4") {
    Last_Class_End_Time_ID = Last_Class_End_Time.substring(2, 4);
    Last_Class_End_Time_ID = 4 * 60 + Last_Class_End_Time_ID.toInt();
    if (Last_Class_End_Time.substring(5, 7) == "PM") {
      Last_Class_End_Time_ID = 720 + Last_Class_End_Time_ID.toInt();
    }
  }
  if (Last_Class_End_Time.substring(0, 1) == "5") {
    Last_Class_End_Time_ID = Last_Class_End_Time.substring(2, 4);
    Last_Class_End_Time_ID = 5 * 60 + Last_Class_End_Time_ID.toInt();
    if (Last_Class_End_Time.substring(5, 7) == "PM") {
      Last_Class_End_Time_ID = 720 + Last_Class_End_Time_ID.toInt();
    }
  }
  if (Last_Class_End_Time.substring(0, 1) == "6") {
    Last_Class_End_Time_ID = Last_Class_End_Time.substring(2, 4);
    Last_Class_End_Time_ID = 6 * 60 + Last_Class_End_Time_ID.toInt();
    if (Last_Class_End_Time.substring(5, 7) == "PM") {
      Last_Class_End_Time_ID = 720 + Last_Class_End_Time_ID.toInt();
    }
  }
  if (Last_Class_End_Time.substring(0, 1) == "7") {
    Last_Class_End_Time_ID = Last_Class_End_Time.substring(2, 4);
    Last_Class_End_Time_ID = 7 * 60 + Last_Class_End_Time_ID.toInt();
    if (Last_Class_End_Time.substring(5, 7) == "PM") {
      Last_Class_End_Time_ID = 720 + Last_Class_End_Time_ID.toInt();
    }
  }
  if (Last_Class_End_Time.substring(0, 1) == "8") {
    Last_Class_End_Time_ID = Last_Class_End_Time.substring(2, 4);
    Last_Class_End_Time_ID = 8 * 60 + Last_Class_End_Time_ID.toInt();
    if (Last_Class_End_Time.substring(5, 7) == "PM") {
      Last_Class_End_Time_ID = 720 + Last_Class_End_Time_ID.toInt();
    }
  }
  if (Last_Class_End_Time.substring(0, 1) == "9") {
    Last_Class_End_Time_ID = Last_Class_End_Time.substring(2, 4);
    Last_Class_End_Time_ID = 9 * 60 + Last_Class_End_Time_ID.toInt();
    if (Last_Class_End_Time.substring(5, 7) == "PM") {
      Last_Class_End_Time_ID = 720 + Last_Class_End_Time_ID.toInt();
    }
  }
  if (Last_Class_End_Time.substring(0, 2) == "10") {
    Last_Class_End_Time_ID = Last_Class_End_Time.substring(3, 5);
    Last_Class_End_Time_ID = 10 * 60 + Last_Class_End_Time_ID.toInt();
    if (Last_Class_End_Time.substring(6, 8) == "PM") {
      Last_Class_End_Time_ID = 720 + Last_Class_End_Time_ID.toInt();
    }
  }
  if (Last_Class_End_Time.substring(0, 2) == "11") {
    Last_Class_End_Time_ID = Last_Class_End_Time.substring(3, 5);
    Last_Class_End_Time_ID = 11 * 60 + Last_Class_End_Time_ID.toInt();
    if (Last_Class_End_Time.substring(6, 8) == "PM") {
      Last_Class_End_Time_ID = 720 + Last_Class_End_Time_ID.toInt();
    }
  }
  if (Last_Class_End_Time.substring(0, 2) == "12") {
    Last_Class_End_Time_ID = Last_Class_End_Time.substring(3, 5);
    Last_Class_End_Time_ID = 12 * 60 + Last_Class_End_Time_ID.toInt();
  }
}
void Current_Class_Start_Time_Convertion() {
  if (Current_Class_Start_Time.substring(0, 1) == "1") {
    Current_Class_Start_Time_ID = Current_Class_Start_Time.substring(2, 4);
    Current_Class_Start_Time_ID = 1 * 60 + Current_Class_Start_Time_ID.toInt();
    if (Current_Class_Start_Time.substring(5, 7) == "PM") {
      Current_Class_Start_Time_ID = 720 + Current_Class_Start_Time_ID.toInt();
    }
  }
  if (Current_Class_Start_Time.substring(0, 1) == "2") {
    Current_Class_Start_Time_ID = Current_Class_Start_Time.substring(2, 4);
    Current_Class_Start_Time_ID = 2 * 60 + Current_Class_Start_Time_ID.toInt();
    if (Current_Class_Start_Time.substring(5, 7) == "PM") {
      Current_Class_Start_Time_ID = 720 + Current_Class_Start_Time_ID.toInt();
    }
  }
  if (Current_Class_Start_Time.substring(0, 1) == "3") {
    Current_Class_Start_Time_ID = Current_Class_Start_Time.substring(2, 4);
    Current_Class_Start_Time_ID = 3 * 60 + Current_Class_Start_Time_ID.toInt();
    if (Current_Class_Start_Time.substring(5, 7) == "PM") {
      Current_Class_Start_Time_ID = 720 + Current_Class_Start_Time_ID.toInt();
    }
  }
  if (Current_Class_Start_Time.substring(0, 1) == "4") {
    Current_Class_Start_Time_ID = Current_Class_Start_Time.substring(2, 4);
    Current_Class_Start_Time_ID = 4 * 60 + Current_Class_Start_Time_ID.toInt();
    if (Current_Class_Start_Time.substring(5, 7) == "PM") {
      Current_Class_Start_Time_ID = 720 + Current_Class_Start_Time_ID.toInt();
    }
  }
  if (Current_Class_Start_Time.substring(0, 1) == "5") {
    Current_Class_Start_Time_ID = Current_Class_Start_Time.substring(2, 4);
    Current_Class_Start_Time_ID = 5 * 60 + Current_Class_Start_Time_ID.toInt();
    if (Current_Class_Start_Time.substring(5, 7) == "PM") {
      Current_Class_Start_Time_ID = 720 + Current_Class_Start_Time_ID.toInt();
    }
  }
  if (Current_Class_Start_Time.substring(0, 1) == "6") {
    Current_Class_Start_Time_ID = Current_Class_Start_Time.substring(2, 4);
    Current_Class_Start_Time_ID = 6 * 60 + Current_Class_Start_Time_ID.toInt();
    if (Current_Class_Start_Time.substring(5, 7) == "PM") {
      Current_Class_Start_Time_ID = 720 + Current_Class_Start_Time_ID.toInt();
    }
  }
  if (Current_Class_Start_Time.substring(0, 1) == "7") {
    Current_Class_Start_Time_ID = Current_Class_Start_Time.substring(2, 4);
    Current_Class_Start_Time_ID = 7 * 60 + Current_Class_Start_Time_ID.toInt();
    if (Current_Class_Start_Time.substring(5, 7) == "PM") {
      Current_Class_Start_Time_ID = 720 + Current_Class_Start_Time_ID.toInt();
    }
  }
  if (Current_Class_Start_Time.substring(0, 1) == "8") {
    Current_Class_Start_Time_ID = Current_Class_Start_Time.substring(2, 4);
    Current_Class_Start_Time_ID = 8 * 60 + Current_Class_Start_Time_ID.toInt();
    if (Current_Class_Start_Time.substring(5, 7) == "PM") {
      Current_Class_Start_Time_ID = 720 + Current_Class_Start_Time_ID.toInt();
    }
  }
  if (Current_Class_Start_Time.substring(0, 1) == "9") {
    Current_Class_Start_Time_ID = Current_Class_Start_Time.substring(2, 4);
    Current_Class_Start_Time_ID = 9 * 60 + Current_Class_Start_Time_ID.toInt();
    if (Current_Class_Start_Time.substring(5, 7) == "PM") {
      Current_Class_Start_Time_ID = 720 + Current_Class_Start_Time_ID.toInt();
    }
  }
  if (Current_Class_Start_Time.substring(0, 2) == "10") {
    Current_Class_Start_Time_ID = Current_Class_Start_Time.substring(3, 5);
    Current_Class_Start_Time_ID = 10 * 60 + Current_Class_Start_Time_ID.toInt();
    if (Current_Class_Start_Time.substring(6, 8) == "PM") {
      Current_Class_Start_Time_ID = 720 + Current_Class_Start_Time_ID.toInt();
    }
  }
  if (Current_Class_Start_Time.substring(0, 2) == "11") {
    Current_Class_Start_Time_ID = Current_Class_Start_Time.substring(3, 5);
    Current_Class_Start_Time_ID = 11 * 60 + Current_Class_Start_Time_ID.toInt();
    if (Current_Class_Start_Time.substring(6, 8) == "PM") {
      Current_Class_Start_Time_ID = 720 + Current_Class_Start_Time_ID.toInt();
    }
  }
  if (Current_Class_Start_Time.substring(0, 2) == "12") {
    Current_Class_Start_Time_ID = Current_Class_Start_Time.substring(3, 5);
    Current_Class_Start_Time_ID = 12 * 60 + Current_Class_Start_Time_ID.toInt();
  }
}