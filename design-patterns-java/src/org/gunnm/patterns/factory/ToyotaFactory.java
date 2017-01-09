package org.gunnm.patterns.factory;

import org.gunnm.patterns.model.Car;
import org.gunnm.patterns.model.CarTesla;
import org.gunnm.patterns.model.CarToyota;

public class ToyotaFactory extends CarFactory {

	public Car createCar ()
	{
		Car newCar = new CarToyota();
		return newCar;
	}
}
