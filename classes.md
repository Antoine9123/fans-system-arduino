Class FenceManager
    propreties
        isActivated(bool)
        private int fenceDirection

    methods
        private bool set_is_activated()
        

        private void set_ventilation_state()
            case temperature > 30° -> setIsActivated(True)
            case temperature < 25° -> setIsActivated(False)
            

        public void ventilationProcess()
            set_ventilation_state()
            if this.isActivated = True 
                go for it bro !
            else
                don't go bro, what are you doing ?!
            
        getFenceDirection()

        setFenceDirection()

Class DistanceSensorManager
    propreties
        isCalibrated bool = false
        dict<float> calibrated_distances

        int sensor_direction
        
    methods
        runCalibration()
            do your stuff
            this.calibrated_distances = ???
            this.isCalibrated = True
            
        bool hasMovement()
        #lancer cette methode seulement si ventilateur is on
            measureDistanceDifference()
                
                for each direction in DIRECTIONS:
                    current_sensor_direction = incrementSensorDirection()
                    current_distance = measureDistance()

                    distance_differences{current_sensor_direction} = |current_distance - calibrated_distances{current_sensor_direction}|

                    delay{1000}

                #on peut faire une moyenne des directions ou il y a une difference significative
                sensor_direction_2_go_2 = find max in distance_differences.direction
                
                return (sensor_direction_2_go_2)




        measureDistance()

            

        incrementSensorDirection()
            if sensor_direction > LAST_DIRECTION
                this.sensor_direction = START_DIRECTION
            else 
                this.sensor_direction += INTERVAL_DIRECTION
            move sensor to direction


        isOn()



Class DataManager
    writeData(data, dataType)

