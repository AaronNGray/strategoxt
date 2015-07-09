package org.strategoxt.strj.pluto_interface;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;
import org.strategoxt.strj.pluto_interface.builder.Provide;
import org.strategoxt.strj.pluto_interface.builder.Require;
import org.strategoxt.strj.pluto_interface.builder.RequireBuild;
import org.strategoxt.strj.pluto_interface.buildmanager.RequireInitially;

public class PlutoLibrary extends AbstractStrategoOperatorRegistry{

	public PlutoLibrary() {
		this.add(new MakeBuilderFactory());
		this.add(new Provide());
		this.add(new Require());
		this.add(new RequireBuild());
		this.add(new RequireInitially());
		this.add(new InitBuilderFactoryStore());
	}
	
	@Override
	public String getOperatorRegistryName() {
		return "PlutoStartegoInterface";
	}

}