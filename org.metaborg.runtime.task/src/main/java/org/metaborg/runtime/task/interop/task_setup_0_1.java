package org.metaborg.runtime.task.interop;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class task_setup_0_1 extends Strategy {
	public static task_setup_0_1 instance = new task_setup_0_1();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm projectPath) {
		TaskManager.getInstance().loadTaskEngine(Tools.asJavaString(projectPath), context.getFactory(),
			context.getIOAgent());
		return current;
	}
}
