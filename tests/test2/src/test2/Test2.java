package test2;

import com.embeddedunveiled.serial.SerialComManager;
import com.embeddedunveiled.serial.SerialComManager.BAUDRATE;
import com.embeddedunveiled.serial.SerialComManager.DATABITS;
import com.embeddedunveiled.serial.SerialComManager.FLOWCONTROL;
import com.embeddedunveiled.serial.SerialComManager.PARITY;
import com.embeddedunveiled.serial.SerialComManager.STOPBITS;

public class Test2 {
	public static void main(String[] args) {
	
		long handle = 0;
		
		// get serial communication manager instance
		SerialComManager scm = new SerialComManager();
		
		try {
			// try opening serial port for read and write without exclusive ownership
			handle = scm.openComPort("/dev/ttyUSB0", true, true, false);
			
			// configure data communication related parameters
			scm.configureComPortData(handle, DATABITS.DB_8, STOPBITS.SB_1, PARITY.P_NONE, BAUDRATE.B115200, 0);
			
			// configure line control related parameters
			scm.configureComPortControl(handle, FLOWCONTROL.NONE, 'x', 'x', false, false);
			
			// try to send data out of serial port
			if(scm.writeString(handle, "testing hello", 0) == true) {
				System.out.println("write success \n");
			}
		
			// try to read data from serial port
			String data = scm.readString(handle);
			System.out.println("data read is :" + data);

			// close serial port
			scm.closeComPort(handle);
			
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}