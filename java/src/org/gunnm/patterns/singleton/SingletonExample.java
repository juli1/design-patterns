package org.gunnm.patterns.singleton;

public class SingletonExample {

	private static SingletonExample m_instance = null;
	
	/*
	 * We do not want any other class to
	 * be able to instantiate a SingletonExample
	 */
	private SingletonExample ()
	{
	}
	
	/*
	 * Here, we create the unique instance of the
	 * class and return it. If it already exists
	 * we just return the instance that was
	 * already created.
	 */
	public SingletonExample getInstance ()
	{
		if (m_instance == null)
		{
			m_instance = new SingletonExample();
		}
		
		return m_instance;
	}
}
