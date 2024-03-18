/*
   represent "state" of "something"!
   pointer ka state representation - smart pointers
   Reference ka state represenation - reference_wrapper
   Thread(set_instructions)- std::async
   Semaphore ka state ----lock_guard, unique_lock,
   Union ka state represent---- std::variant
   


*/

class TrainingSession{
      /*
       _duration : (in hours): int
       _studentCount: unsigned Integer
       _trainerName: string
       _sessionTopic : string
       _date : DateTime
      */
};//represent state 



class ID{

    /*
      _country: IN
      _year : 24
      _month : 01
      _track_level : LEVEL (enum)
      _batch_number : 01
      _location:optional
      _track_name: TRACK
    */
}

class TrainingBatch{
    //IN2401BT_01_P_CPP
    /*
       _id: ID
       _strength: unsigned INT
       _trainer :Trainer------------------------- PERSON
       _pmt_coordinator: Coordinator--------------PERSON
       _schedule : Schedule
       _talents: Container<Talent>

    */
}