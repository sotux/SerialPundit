/**
 * Author : Rishi Gupta
 * 
 * This file is part of 'serial communication manager' library.
 *
 * The 'serial communication manager' is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by the Free Software 
 * Foundation, either version 3 of the License, or (at your option) any later version.
 *
 * The 'serial communication manager' is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A 
 * PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with serial communication manager. If not, see <http://www.gnu.org/licenses/>.
 */
package com.embeddedunveiled.serial;

import java.util.Locale;

/**
 * <p>This class identifies various hardware and software platform attributes like operating system type and CPU architecture etc.</p>
 */
public final class SerialComPlatform {

	/** Operating system name as returned by JVM/JRE. */
	private String osName = null;
	
	/** CPU architecture as returned by JVM/JRE. */
	private String osArch = null;

	/**
	 * <p>Allocates a new SerialComPlatform object.</p>
	 */
	public SerialComPlatform() {
	}
	
	public final int getOSType() {
		int osType = SerialComManager.OS_UNKNOWN;
		osName = System.getProperty("os.name").toLowerCase(Locale.ENGLISH).trim();
		if(osName == null) {
			//TODO
		}
		if(osName.contains("windows")) {
			osType = SerialComManager.OS_WINDOWS;
		}else if(osName.contains("linux")) {
			if(isAndroid()) {
				osType = SerialComManager.OS_ANDROID;
			}else {
				osType = SerialComManager.OS_LINUX;
			}
		}else if(osName.contains("mac os") || osName.contains("macos") || osName.contains("darwin")) {
			osType = SerialComManager.OS_MAC_OS_X;
		}else if(osName.contains("solaris") || osName.contains("sunos")) {
			osType = SerialComManager.OS_SOLARIS;
		}else if(osName.contains("freebsd") || osName.contains("free bsd")) {
			osType = SerialComManager.OS_FREEBSD;
		}else if(osName.contains("netbsd")) {
			osType = SerialComManager.OS_NETBSD;
		}else if(osName.contains("openbsd")) {
			osType = SerialComManager.OS_OPENBSD;
		}else if(osName.contains("aix")) {
			osType = SerialComManager.OS_IBM_AIX;
		}else if(osName.contains("hp-ux")) {
			osType = SerialComManager.OS_HP_UX;
		}else {
		}
		return osType;
	}

	/** Packages that are compiled for i386 architecture, are compatible with i486, i586, i686, i786, i886 and i896 architectures. */
	public final int getCPUArch() {
		int osArchitecture = SerialComManager.ARCH_UNKNOWN;
		osArch = System.getProperty("os.arch").toLowerCase(Locale.ENGLISH).trim();
		if(osArch == null) {
		//TODO	
		}
		if(osArch.equals("x86") || osArch.equals("i386") || osArch.equals("i486") || osArch.equals("i586") || osArch.equals("i686") 
				|| osArch.equals("i786") || osArch.equals("i886") || osArch.equals("i986") || osArch.equals("pentium") || osArch.equals("i86pc")) {
			osArchitecture = SerialComManager.ARCH_X86;
		}else if(osArch.equals("amd64") || osArch.equals("x86_64") || osArch.equals("em64t") || osArch.equals("x86-64") || osArch.equals("universal")) {
			osArchitecture = SerialComManager.ARCH_AMD64; // universal may be needed for openjdk7 in Mac
		}else if(osArch.equals("ia64") || osArch.equals("ia64w")) {
			osArchitecture = SerialComManager.ARCH_IA64;
		}else if(osArch.equals("ia64_32") || osArch.equals("ia64n")) {
			osArchitecture = SerialComManager.ARCH_IA64_32;
		}else if(osArch.equals("ppc") || osArch.equals("power") || osArch.equals("powerpc") || osArch.equals("power_pc") || osArch.equals("power_rs")) {
			osArchitecture = SerialComManager.ARCH_PPC32;
		}else if(osArch.equals("ppc64") || osArch.equals("power64") || osArch.equals("powerpc64") || osArch.equals("power_pc64") || osArch.equals("power_rs64")) {
			osArchitecture = SerialComManager.ARCH_PPC64;
		}else if(osArch.equals("powerpc64le")) {
			osArchitecture = SerialComManager.ARCH_PPC64LE;
		}else if(osArch.equals("sparc")) {
			osArchitecture = SerialComManager.ARCH_SPARC32;
		}else if(osArch.equals("sparcv9")) {
			osArchitecture = SerialComManager.ARCH_SPARC64;
		}else if(osArch.equals("pa-risc") || osArch.equals("pa-risc2.0")) {
			osArchitecture = SerialComManager.ARCH_PA_RISC32;
		}else if(osArch.equals("pa-risc2.0w")) {
			osArchitecture = SerialComManager.ARCH_PA_RISC64;
		}else if(osArch.equals("s390")) {
			osArchitecture = SerialComManager.ARCH_S390;
		}else if(osArch.equals("s390x")) {
			osArchitecture = SerialComManager.ARCH_S390X;
		}else {
		}
		return osArchitecture;
	}
	
	/** 
	 * Identifies whether library is running on android platform.
	 */
	private boolean isAndroid() {
		String osVendor = System.getProperty("java.vm.vendor").toLowerCase(Locale.ENGLISH).trim();
		if(osVendor == null) {
		//TODO	
		}
		// java.vm.vendor system property in android always returns The Android Project as per android javadocs.
		if(osVendor.contains("android")) {
			return true;
		}
		return false;
	}
}















