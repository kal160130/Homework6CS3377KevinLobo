/* 
  BinaryFileHeader.h
   4/30/2020
   Kevin Lobo
   kal160130@utdallas.edu
   CS 3377.501 Spring 2020
   Version 1.0
   2020 All rights reserved
   Header file for Binary file records and any programs that will use them
*/
class BinaryFileHeader
{
 public:
  unit32_t magicNumber;
  unit32_t versionNumber;
  unit64_t numRecords;
}
