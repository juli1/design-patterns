package org.gunnm.patterns.factory;

import org.gunnm.patterns.model.Car;
import org.gunnm.patterns.model.CarTesla;

public class TeslaFactory extends CarFactory {

	public Car createCar ()
	{
		Car newCar = new CarTesla();
		return newCar;
	}
}
