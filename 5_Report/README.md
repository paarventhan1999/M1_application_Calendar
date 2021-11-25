# Calendar

#  Code Badges

 Codacy | Code Inspector
------|-----------|

# Requirements

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/7ffb4adfe56f49b3b38b7de468ac1d17)](https://app.codacy.com/gh/paarventhan1999/M1_application_Calendar?utm_source=github.com&utm_medium=referral&utm_content=paarventhan1999/M1_application_Calendar&utm_campaign=Badge_Grade_Settings)

[![code quality](https://api.codiga.io/project/29959/score/svg)](https://app.codiga.io/project/29959/dashboard)

[![code grade](https://api.codiga.io/project/29959/status/svg)](https://app.codiga.io/project/29959/dashboard)

[![Code Quality - Cppcheck](https://github.com/paarventhan1999/M1_application_Calendar/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/paarventhan1999/M1_application_Calendar/actions/workflows/cppcheck.yml)

[![Unit Testing - Unity](https://github.com/paarventhan1999/M1_application_Calendar/actions/workflows/unity.yml/badge.svg)](https://github.com/paarventhan1999/M1_application_Calendar/actions/workflows/unity.yml)

## Introduction

This project prints out the calendar of a user desired year and showing dates and days of the week, it will use the formual to calcualte the leap year and to find out which day of the week does the day 0 start on a given year.

### Leap Year Rules: How to Calculate Leap Years

In the Gregorian calendar, three criteria must be taken into account to identify leap years:

-   The year must be evenly divisible by 4;
-   If the year can also be evenly divided by 100, it is not a leap year;
    unless...
-   The year is also evenly divisible by 400. Then it is a leap year.

## Features:

1. Adding the year.
2. Listing the Months.
3. Listing the Days.
4. Adding the leap in Calendar

## SWOT ANALYSIS:

### Strengths: 
A calendar allows you to see quickly when you are free and when you have prior commitments. Planning events or other special occasions also becomes easier when you know your    availability.

### Weakness: 
Data corruption is possible, altering or even deleing events.

### Opportunities:
Keep your calendar in a location that’s easily accessible and visible.

### Threats: 
Too many options can make simple event scheduling complicated.

## 4W's and 1H:

### Who: 
Calendar 
### What: 
To Display Date, Months and Year. 
### When: 
There was problem in seeing the Calendar in manual, but advancement features are there in smatphones and computer.
### Where: 
This project can be used for seeing the Date, Months and Years.
### How: 
When the schedule data is stored maually it may inconvinience for the accessing it. Digitally stored data will be helpful to access the schedule data easily. 

## Details requirements:

#### High Level Requirements:
| ID | Description | Status |
|------|------|------|
| HLR1 | User shall be able to see the Days  | Implemented
| HLR2 | User shall be able to see the Months | Implemented
| HLR3 | User shall be able to see the Years |	Implemented
| HLR4 | Leap year is set has per the years in calendar |	Implemented

#### Low Level Requirements:

| ID | Description | Status |
|-------|------|------|
| LLR1 | User shall be able to change the Years in  // Driver code command  | Implemented 
| LLR2 | System must display data without error | Implemented

# Structural Diagram:

![flow chart](https://user-images.githubusercontent.com/94282753/143241712-0eee38fd-e373-41c8-bc79-a97b6e6becf1.jpg)

# Behavioural Diagram:

![UML-class-diagram-of-the-calendar-case-study](https://user-images.githubusercontent.com/94223103/142966733-451aba0d-dfe3-484f-b76e-063e4c86adac.png)

## Test Plan

## High Level Test Plan

| Test ID | Keys | Description | Expected Output | Actual Output | Pass/fail(Result)
|--|--|--|--|--|--|
| TID 1 |1| List of days | SUCCESS  | SUCCESS | PASS
| TID 2 |2|  List of Months | SUCCESS | SUCCESS | PASS 
| TID 3 |3|  List of Years |  SUCCESS  | SUCCESS | PASS
| TID 4 |4|  List of Leap years | SUCCESS | SUCCESS | PASS 

 
## Low Level Test Plan 

| Test ID | Description |Expected Output| Actual Output | Pass/Fail(Result)
|--|--|--|--|--|
| TID 1 | User shall be able to change the Years in  // Driver code command  | SUCCESS | SUCCESS | PASS 
| TID 2 | System must display Calendar | SUCCESS | SUCCESS | PASS

## Output

![op](https://user-images.githubusercontent.com/94282753/142984941-c12d81a2-7c20-4a2b-810d-87ac463d5b8f.png)





