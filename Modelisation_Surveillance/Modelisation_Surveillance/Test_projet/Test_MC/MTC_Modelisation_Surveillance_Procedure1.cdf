<?xml version="1.0" encoding="UTF-8"?>
<CriterionFile>
	<model>
		<Model index="1">
			<operators>
				<Operator index="2" name="Check_interval_Temperature">
					<paths>
						<Path index="3" name="$lte#1 -&gt; Output1" AC="$lte#2 and outputs activated" criterionEntity="13"/>
						<Path index="4" name="$lte#2 -&gt; Output1" AC="$lte#1 and outputs activated" criterionEntity="13"/>
					</paths>
					<rootPaths>
						<PathElement index="5" ident="Check_interval_Temperature/Output1" name="Output1" scadeOid="!ed/4cb0/1A/127C/5e3ada311b91">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="6" ident="Check_interval_Temperature/_L4" name="$and#1" scadeOid="!ed/4c99/1A/127C/5e3ad9d77291">
									<children>
										<PathElement index="7" ident="Check_interval_Temperature/_L7" name="$lte#1" scadeOid="!ed/9f68/34EA/64C/5e3d5afcb02" path="3">
											<activationCondition>
												<ActivationCondition condition="$lte#2"/>
											</activationCondition>
											<children>
												<PathElement index="8" ident="Check_interval_Temperature/_L10" name="Temperature_Low" scadeOid="!ed/9fa5/34EA/64C/5e3d5c0c6ba7"/>
												<PathElement index="9" ident="Check_interval_Temperature/_L1" name="temperature -&gt; $lte#1 i2" scadeOid="!ed/4b45/1A/127C/5e3ad76d2b8a" rightExprIndex="1"/>
											</children>
										</PathElement>
										<PathElement index="10" ident="Check_interval_Temperature/_L9" name="$lte#2" scadeOid="!ed/9f74/34EA/64C/5e3d5b0a6e59" rightExprIndex="1" path="4">
											<activationCondition>
												<ActivationCondition condition="$lte#1"/>
											</activationCondition>
											<children>
												<PathElement index="11" ident="Check_interval_Temperature/_L1" name="temperature -&gt; $lte#2 i1" scadeOid="!ed/4b45/1A/127C/5e3ad76d2b8a"/>
												<PathElement index="12" ident="Check_interval_Temperature/_L5" name="Temperature_High" scadeOid="!ed/4c9f/1A/127C/5e3ada216c33" rightExprIndex="1"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="13" name="MTCEx::MTC_Observers::Check_interval_Temperature_PATHS1_MTC_OBS" kind="1"/>
				<Operator index="14" name="Check_interval_pH">
					<paths>
						<Path index="15" name="$lte#1 -&gt; Output1" AC="$gte#1 and outputs activated" criterionEntity="25"/>
						<Path index="16" name="$gte#1 -&gt; Output1" AC="$lte#1 and outputs activated" criterionEntity="25"/>
					</paths>
					<rootPaths>
						<PathElement index="17" ident="Check_interval_pH/Output1" name="Output1" scadeOid="!ed/4ccb/1A/127C/5e3ada8a7b64">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="18" ident="Check_interval_pH/_L2" name="$and#1" scadeOid="!ed/4cc0/1A/127C/5e3ada863f01">
									<children>
										<PathElement index="19" ident="Check_interval_pH/_L9" name="$lte#1" scadeOid="!ed/9f56/34EA/64C/5e3d5aaa541c" path="15">
											<activationCondition>
												<ActivationCondition condition="$gte#1"/>
											</activationCondition>
											<children>
												<PathElement index="20" ident="Check_interval_pH/_L6" name="pH_low" scadeOid="!ed/4cee/1A/127C/5e3adaa66214"/>
												<PathElement index="21" ident="Check_interval_pH/_L4" name="pH -&gt; $lte#1 i2" scadeOid="!ed/4cda/1A/127C/5e3ada8e518" rightExprIndex="1"/>
											</children>
										</PathElement>
										<PathElement index="22" ident="Check_interval_pH/_L8" name="$gte#1" scadeOid="!ed/9f4c/34EA/64C/5e3d5a9d6f9d" rightExprIndex="1" path="16">
											<activationCondition>
												<ActivationCondition condition="$lte#1"/>
											</activationCondition>
											<children>
												<PathElement index="23" ident="Check_interval_pH/_L5" name="pH_High" scadeOid="!ed/4ce8/1A/127C/5e3adaa23f3f"/>
												<PathElement index="24" ident="Check_interval_pH/_L4" name="pH -&gt; $gte#1 i2" scadeOid="!ed/4cda/1A/127C/5e3ada8e518" rightExprIndex="1"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="25" name="MTCEx::MTC_Observers::Check_interval_pH_PATHS1_MTC_OBS" kind="1"/>
				<Operator index="26" name="Check_interval_Redox">
					<paths>
						<Path index="27" name="$gte#1 -&gt; Output1" AC="$lte#1 and outputs activated" criterionEntity="37"/>
						<Path index="28" name="$lte#1 -&gt; Output1" AC="$gte#1 and outputs activated" criterionEntity="37"/>
					</paths>
					<rootPaths>
						<PathElement index="29" ident="Check_interval_Redox/Output1" name="Output1" scadeOid="!ed/4d27/1A/127C/5e3adade651b">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="30" ident="Check_interval_Redox/_L1" name="$and#1" scadeOid="!ed/4cfd/1A/127C/5e3adabd2f3">
									<children>
										<PathElement index="31" ident="Check_interval_Redox/_L7" name="$gte#1" scadeOid="!ed/9f5c/34EA/64C/5e3d5ad621db" path="27">
											<activationCondition>
												<ActivationCondition condition="$lte#1"/>
											</activationCondition>
											<children>
												<PathElement index="32" ident="Check_interval_Redox/_L4" name="Redox -&gt; $gte#1 i1" scadeOid="!ed/4d10/1A/127C/5e3adad032ca"/>
												<PathElement index="33" ident="Check_interval_Redox/_L5" name="Redox_Low" scadeOid="!ed/4d2c/1A/127C/5e3adb0a3605" rightExprIndex="1"/>
											</children>
										</PathElement>
										<PathElement index="34" ident="Check_interval_Redox/_L8" name="$lte#1" scadeOid="!ed/9f62/34EA/64C/5e3d5aee316c" rightExprIndex="1" path="28">
											<activationCondition>
												<ActivationCondition condition="$gte#1"/>
											</activationCondition>
											<children>
												<PathElement index="35" ident="Check_interval_Redox/_L4" name="Redox -&gt; $lte#1 i1" scadeOid="!ed/4d10/1A/127C/5e3adad032ca"/>
												<PathElement index="36" ident="Check_interval_Redox/_L6" name="Redox_High" scadeOid="!ed/4d32/1A/127C/5e3adb123069" rightExprIndex="1"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="37" name="MTCEx::MTC_Observers::Check_interval_Redox_PATHS1_MTC_OBS" kind="1"/>
				<Operator index="38" name="Check_normal_pH" excluded="true"/>
				<Operator index="39" name="Check_normal_Temperature" excluded="true"/>
				<Operator index="40" name="Check_normal_Redox" excluded="true"/>
				<Operator index="41" name="Mean_10_Table">
					<paths>
						<Path index="42" name="$flatten#1" AC="outputs activated" criterionEntity="117"/>
						<Path index="43" name="$flatten#2" AC="outputs activated" criterionEntity="118"/>
						<Path index="44" name="$flatten#3" AC="outputs activated" criterionEntity="119"/>
						<Path index="45" name="$flatten#4" AC="outputs activated" criterionEntity="120"/>
						<Path index="46" name="$flatten#6" AC="outputs activated" criterionEntity="121"/>
						<Path index="47" name="$flatten#8" AC="outputs activated" criterionEntity="122"/>
						<Path index="48" name="$flatten#10" AC="outputs activated" criterionEntity="123"/>
						<Path index="49" name="$flatten#12" AC="outputs activated" criterionEntity="124"/>
						<Path index="50" name="$flatten#14" AC="outputs activated" criterionEntity="125"/>
						<Path index="51" name="$flatten#16" AC="outputs activated" criterionEntity="126"/>
						<Path index="52" name="$flatten#20" AC="outputs activated" criterionEntity="127"/>
					</paths>
					<rootPaths>
						<PathElement index="53" ident="Mean_10_Table/Temperature" name="Temperature" scadeOid="!ed/5801/552E/1160/5e3c20b87eb4">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="54" ident="Mean_10_Table/_L45" name="$rdiv#1" scadeOid="!ed/580e/552E/1160/5e3c20ce1cdb">
									<children>
										<PathElement index="55" ident="Mean_10_Table/_L42" name="$plus#1" scadeOid="!ed/57c4/552E/1160/5e3c1ff06152">
											<children>
												<PathElement index="56" ident="Mean_10_Table/_L14" name="$flatten#2 o1" scadeOid="!ed/5723/552E/1160/5e3c1f7953c9"/>
												<PathElement index="57" ident="Mean_10_Table/_L17" name="$flatten#3 o1" scadeOid="!ed/572d/552E/1160/5e3c1f7b6ab3" rightExprIndex="1"/>
												<PathElement index="58" ident="Mean_10_Table/_L20" name="$flatten#4 o1" scadeOid="!ed/5737/552E/1160/5e3c1f897c75" rightExprIndex="2"/>
												<PathElement index="59" ident="Mean_10_Table/_L23" name="$flatten#6 o1" scadeOid="!ed/5747/552E/1160/5e3c1f93329f" rightExprIndex="3"/>
												<PathElement index="60" ident="Mean_10_Table/_L26" name="$flatten#8 o1" scadeOid="!ed/5753/552E/1160/5e3c1f946445" rightExprIndex="4"/>
												<PathElement index="61" ident="Mean_10_Table/_L29" name="$flatten#10 o1" scadeOid="!ed/575f/552E/1160/5e3c1f94783b" rightExprIndex="5"/>
												<PathElement index="62" ident="Mean_10_Table/_L32" name="$flatten#12 o1" scadeOid="!ed/576b/552E/1160/5e3c1f946cc4" rightExprIndex="6"/>
												<PathElement index="63" ident="Mean_10_Table/_L35" name="$flatten#14 o1" scadeOid="!ed/5777/552E/1160/5e3c1f9422cd" rightExprIndex="7"/>
												<PathElement index="64" ident="Mean_10_Table/_L38" name="$flatten#16 o1" scadeOid="!ed/5783/552E/1160/5e3c1f9569d7" rightExprIndex="8"/>
												<PathElement index="65" ident="Mean_10_Table/_L41" name="$flatten#20 o1" scadeOid="!ed/579b/552E/1160/5e3c1fa816ca" rightExprIndex="9"/>
											</children>
										</PathElement>
										<PathElement index="66" ident="Mean_10_Table/_L46" name="$rdiv#1 i2" scadeOid="!ed/581e/552E/1160/5e3c20d410c1" rightExprIndex="1"/>
									</children>
								</PathElement>
							</children>
						</PathElement>
						<PathElement index="67" ident="Mean_10_Table/_L11" name="$flatten#1" scadeOid="!ed/570f/552E/1160/5e3c1f634a8d" path="42">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="68" ident="Mean_10_Table/_L1" name="Input1" scadeOid="!ed/56fb/552E/1160/5e3c1f55255e"/>
							</children>
						</PathElement>
						<PathElement index="69" ident="Mean_10_Table/pH" name="pH" scadeOid="!ed/5875/552E/1160/5e3c20ea41b">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="70" ident="Mean_10_Table/_L47" name="$rdiv#2" scadeOid="!ed/5844/552E/1160/5e3c20e16f6c">
									<children>
										<PathElement index="71" ident="Mean_10_Table/_L43" name="$plus#2" scadeOid="!ed/57e0/552E/1160/5e3c1ff781c">
											<children>
												<PathElement index="72" ident="Mean_10_Table/_L14" name="$flatten#2 o2" scadeOid="!ed/5723/552E/1160/5e3c1f7953c9"/>
												<PathElement index="73" ident="Mean_10_Table/_L17" name="$flatten#3 o2" scadeOid="!ed/572d/552E/1160/5e3c1f7b6ab3" rightExprIndex="1"/>
												<PathElement index="74" ident="Mean_10_Table/_L20" name="$flatten#4 o2" scadeOid="!ed/5737/552E/1160/5e3c1f897c75" rightExprIndex="2"/>
												<PathElement index="75" ident="Mean_10_Table/_L23" name="$flatten#6 o2" scadeOid="!ed/5747/552E/1160/5e3c1f93329f" rightExprIndex="3"/>
												<PathElement index="76" ident="Mean_10_Table/_L26" name="$flatten#8 o2" scadeOid="!ed/5753/552E/1160/5e3c1f946445" rightExprIndex="4"/>
												<PathElement index="77" ident="Mean_10_Table/_L29" name="$flatten#10 o2" scadeOid="!ed/575f/552E/1160/5e3c1f94783b" rightExprIndex="5"/>
												<PathElement index="78" ident="Mean_10_Table/_L32" name="$flatten#12 o2" scadeOid="!ed/576b/552E/1160/5e3c1f946cc4" rightExprIndex="6"/>
												<PathElement index="79" ident="Mean_10_Table/_L35" name="$flatten#14 o2" scadeOid="!ed/5777/552E/1160/5e3c1f9422cd" rightExprIndex="7"/>
												<PathElement index="80" ident="Mean_10_Table/_L38" name="$flatten#16 o2" scadeOid="!ed/5783/552E/1160/5e3c1f9569d7" rightExprIndex="8"/>
												<PathElement index="81" ident="Mean_10_Table/_L41" name="$flatten#20 o2" scadeOid="!ed/579b/552E/1160/5e3c1fa816ca" rightExprIndex="9"/>
											</children>
										</PathElement>
										<PathElement index="82" ident="Mean_10_Table/_L48" name="$rdiv#2 i2" scadeOid="!ed/5854/552E/1160/5e3c20e4616b" rightExprIndex="1"/>
									</children>
								</PathElement>
							</children>
						</PathElement>
						<PathElement index="83" ident="Mean_10_Table/_L14" name="$flatten#2" scadeOid="!ed/5723/552E/1160/5e3c1f7953c9" path="43">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="84" ident="Mean_10_Table/_L11" name="$flatten#1 o1" scadeOid="!ed/570f/552E/1160/5e3c1f634a8d"/>
							</children>
						</PathElement>
						<PathElement index="85" ident="Mean_10_Table/_L17" name="$flatten#3" scadeOid="!ed/572d/552E/1160/5e3c1f7b6ab3" path="44">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="86" ident="Mean_10_Table/_L11" name="$flatten#1 o2" scadeOid="!ed/570f/552E/1160/5e3c1f634a8d"/>
							</children>
						</PathElement>
						<PathElement index="87" ident="Mean_10_Table/_L20" name="$flatten#4" scadeOid="!ed/5737/552E/1160/5e3c1f897c75" path="45">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="88" ident="Mean_10_Table/_L11" name="$flatten#1 o3" scadeOid="!ed/570f/552E/1160/5e3c1f634a8d"/>
							</children>
						</PathElement>
						<PathElement index="89" ident="Mean_10_Table/_L23" name="$flatten#6" scadeOid="!ed/5747/552E/1160/5e3c1f93329f" path="46">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="90" ident="Mean_10_Table/_L11" name="$flatten#1 o4" scadeOid="!ed/570f/552E/1160/5e3c1f634a8d"/>
							</children>
						</PathElement>
						<PathElement index="91" ident="Mean_10_Table/_L26" name="$flatten#8" scadeOid="!ed/5753/552E/1160/5e3c1f946445" path="47">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="92" ident="Mean_10_Table/_L11" name="$flatten#1 o5" scadeOid="!ed/570f/552E/1160/5e3c1f634a8d"/>
							</children>
						</PathElement>
						<PathElement index="93" ident="Mean_10_Table/_L29" name="$flatten#10" scadeOid="!ed/575f/552E/1160/5e3c1f94783b" path="48">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="94" ident="Mean_10_Table/_L11" name="$flatten#1 o6" scadeOid="!ed/570f/552E/1160/5e3c1f634a8d"/>
							</children>
						</PathElement>
						<PathElement index="95" ident="Mean_10_Table/_L32" name="$flatten#12" scadeOid="!ed/576b/552E/1160/5e3c1f946cc4" path="49">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="96" ident="Mean_10_Table/_L11" name="$flatten#1 o7" scadeOid="!ed/570f/552E/1160/5e3c1f634a8d"/>
							</children>
						</PathElement>
						<PathElement index="97" ident="Mean_10_Table/_L35" name="$flatten#14" scadeOid="!ed/5777/552E/1160/5e3c1f9422cd" path="50">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="98" ident="Mean_10_Table/_L11" name="$flatten#1 o8" scadeOid="!ed/570f/552E/1160/5e3c1f634a8d"/>
							</children>
						</PathElement>
						<PathElement index="99" ident="Mean_10_Table/_L38" name="$flatten#16" scadeOid="!ed/5783/552E/1160/5e3c1f9569d7" path="51">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="100" ident="Mean_10_Table/_L11" name="$flatten#1 o9" scadeOid="!ed/570f/552E/1160/5e3c1f634a8d"/>
							</children>
						</PathElement>
						<PathElement index="101" ident="Mean_10_Table/_L41" name="$flatten#20" scadeOid="!ed/579b/552E/1160/5e3c1fa816ca" path="52">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="102" ident="Mean_10_Table/_L11" name="$flatten#1 o10" scadeOid="!ed/570f/552E/1160/5e3c1f634a8d"/>
							</children>
						</PathElement>
						<PathElement index="103" ident="Mean_10_Table/Redox" name="Redox" scadeOid="!ed/58b3/552E/1160/5e3c21003af4">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="104" ident="Mean_10_Table/_L49" name="$rdiv#3" scadeOid="!ed/5882/552E/1160/5e3c20f663f0">
									<children>
										<PathElement index="105" ident="Mean_10_Table/_L44" name="$plus#3" scadeOid="!ed/57f0/552E/1160/5e3c1ffc301b">
											<children>
												<PathElement index="106" ident="Mean_10_Table/_L14" name="$flatten#2 o3" scadeOid="!ed/5723/552E/1160/5e3c1f7953c9"/>
												<PathElement index="107" ident="Mean_10_Table/_L17" name="$flatten#3 o3" scadeOid="!ed/572d/552E/1160/5e3c1f7b6ab3" rightExprIndex="1"/>
												<PathElement index="108" ident="Mean_10_Table/_L20" name="$flatten#4 o3" scadeOid="!ed/5737/552E/1160/5e3c1f897c75" rightExprIndex="2"/>
												<PathElement index="109" ident="Mean_10_Table/_L23" name="$flatten#6 o3" scadeOid="!ed/5747/552E/1160/5e3c1f93329f" rightExprIndex="3"/>
												<PathElement index="110" ident="Mean_10_Table/_L26" name="$flatten#8 o3" scadeOid="!ed/5753/552E/1160/5e3c1f946445" rightExprIndex="4"/>
												<PathElement index="111" ident="Mean_10_Table/_L29" name="$flatten#10 o3" scadeOid="!ed/575f/552E/1160/5e3c1f94783b" rightExprIndex="5"/>
												<PathElement index="112" ident="Mean_10_Table/_L32" name="$flatten#12 o3" scadeOid="!ed/576b/552E/1160/5e3c1f946cc4" rightExprIndex="6"/>
												<PathElement index="113" ident="Mean_10_Table/_L35" name="$flatten#14 o3" scadeOid="!ed/5777/552E/1160/5e3c1f9422cd" rightExprIndex="7"/>
												<PathElement index="114" ident="Mean_10_Table/_L38" name="$flatten#16 o3" scadeOid="!ed/5783/552E/1160/5e3c1f9569d7" rightExprIndex="8"/>
												<PathElement index="115" ident="Mean_10_Table/_L41" name="$flatten#20 o3" scadeOid="!ed/579b/552E/1160/5e3c1fa816ca" rightExprIndex="9"/>
											</children>
										</PathElement>
										<PathElement index="116" ident="Mean_10_Table/_L50" name="$rdiv#3 i2" scadeOid="!ed/5892/552E/1160/5e3c20fa618e" rightExprIndex="1"/>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="117" name="MTCEx::MTC_Observers::Mean_10_Table_PATHS1_MTC_OBS" kind="1"/>
				<Operator index="118" name="MTCEx::MTC_Observers::Mean_10_Table_PATHS2_MTC_OBS" kind="1"/>
				<Operator index="119" name="MTCEx::MTC_Observers::Mean_10_Table_PATHS3_MTC_OBS" kind="1"/>
				<Operator index="120" name="MTCEx::MTC_Observers::Mean_10_Table_PATHS4_MTC_OBS" kind="1"/>
				<Operator index="121" name="MTCEx::MTC_Observers::Mean_10_Table_PATHS5_MTC_OBS" kind="1"/>
				<Operator index="122" name="MTCEx::MTC_Observers::Mean_10_Table_PATHS6_MTC_OBS" kind="1"/>
				<Operator index="123" name="MTCEx::MTC_Observers::Mean_10_Table_PATHS7_MTC_OBS" kind="1"/>
				<Operator index="124" name="MTCEx::MTC_Observers::Mean_10_Table_PATHS8_MTC_OBS" kind="1"/>
				<Operator index="125" name="MTCEx::MTC_Observers::Mean_10_Table_PATHS9_MTC_OBS" kind="1"/>
				<Operator index="126" name="MTCEx::MTC_Observers::Mean_10_Table_PATHS10_MTC_OBS" kind="1"/>
				<Operator index="127" name="MTCEx::MTC_Observers::Mean_10_Table_PATHS11_MTC_OBS" kind="1"/>
				<Operator index="128" name="Push_Table">
					<rootPaths>
						<PathElement index="129" ident="Push_Table/Output1" name="Output1" scadeOid="!ed/5950/552E/1160/5e3c21b67e0">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="130" ident="Push_Table/_L15" name="$concat#1" scadeOid="!ed/596e/552E/1160/5e3c2217504e">
									<children>
										<PathElement index="131" ident="Push_Table/_L18" name="$slice#1" scadeOid="!ed/597e/552E/1160/5e3c22382872">
											<children>
												<PathElement index="132" ident="Push_Table/_L1" name="Input1" scadeOid="!ed/58d9/552E/1160/5e3c21457869"/>
												<PathElement index="133" ident="Push_Table/_L18" name="$slice#1 i2" scadeOid="!ed/597e/552E/1160/5e3c22382872" rightExprIndex="1"/>
												<PathElement index="134" ident="Push_Table/_L18" name="$slice#1 i3" scadeOid="!ed/597e/552E/1160/5e3c22382872" rightExprIndex="2"/>
											</children>
										</PathElement>
										<PathElement index="135" ident="Push_Table/_L19" name="$scalar_to_vector#1" scadeOid="!ed/5994/552E/1160/5e3c225d1408" rightExprIndex="1">
											<children>
												<PathElement index="136" ident="Push_Table/_L13" name="newData" scadeOid="!ed/5922/552E/1160/5e3c217574d5"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="137" name="digital::FallingEdge" excluded="true"/>
				<Operator index="138" name="digital::FlipFlopJK" excluded="true"/>
				<Operator index="139" name="digital::FlipFlopReset" excluded="true"/>
				<Operator index="140" name="digital::FlipFlopSet" excluded="true"/>
				<Operator index="141" name="digital::RisingEdge" excluded="true"/>
				<Operator index="142" name="digital::Toggle" excluded="true"/>
				<Operator index="143" name="digital::count_down" excluded="true"/>
				<Operator index="144" name="digital::EitherEdge" excluded="true"/>
				<Operator index="145" name="digital::BoolVect2IntElt" excluded="true"/>
				<Operator index="146" name="digital::Int2BoolVectElt" excluded="true"/>
				<Operator index="147" name="digital::BoolVect2Int8" excluded="true"/>
				<Operator index="148" name="digital::Int2BoolVect" excluded="true"/>
				<Operator index="149" name="digital::BoolVect2Int16" excluded="true"/>
				<Operator index="150" name="digital::BoolVect2Uint16" excluded="true"/>
				<Operator index="151" name="digital::BoolVect2Uint32" excluded="true"/>
				<Operator index="152" name="digital::BoolVect2Uint64" excluded="true"/>
				<Operator index="153" name="digital::BoolVect2Uint8" excluded="true"/>
				<Operator index="154" name="digital::BoolVect2Int32" excluded="true"/>
				<Operator index="155" name="digital::BoolVect2Int64" excluded="true"/>
				<Operator index="156" name="digital::InactiveTime" excluded="true"/>
				<Operator index="157" name="digital::InactiveCycles" excluded="true"/>
				<Operator index="158" name="digital::Relay" excluded="true"/>
				<Operator index="159" name="digital::EntryDetect" excluded="true"/>
				<Operator index="160" name="truthtables::TruthTableElt" excluded="true"/>
				<Operator index="161" name="truthtables::TruthTableLineIdx" excluded="true"/>
				<Operator index="162" name="truthtables::TruthTableIdx" excluded="true"/>
				<Operator index="163" name="truthtables::TruthTableExh" excluded="true"/>
				<Operator index="164" name="truthtables::TruthTableLine" excluded="true"/>
				<Operator index="165" name="truthtables::TruthTable" excluded="true"/>
				<Operator index="166" name="linear::Gain" excluded="true"/>
				<Operator index="167" name="linear::MeanCycle2" excluded="true"/>
				<Operator index="168" name="linear::MeanCycle3" excluded="true"/>
				<Operator index="169" name="linear::Derivative" excluded="true"/>
				<Operator index="170" name="linear::Filter1stOrderLoop" excluded="true"/>
				<Operator index="171" name="linear::Memory" excluded="true"/>
				<Operator index="172" name="linear::HitCrossingEither" excluded="true"/>
				<Operator index="173" name="linear::HitCrossingFalling" excluded="true"/>
				<Operator index="174" name="linear::HitCrossingRising" excluded="true"/>
				<Operator index="175" name="linear::MemoryBasic" excluded="true"/>
				<Operator index="176" name="linear::Backlash" excluded="true"/>
				<Operator index="177" name="linear::DetectRisePositive" excluded="true"/>
				<Operator index="178" name="linear::DetectRiseNonNegative" excluded="true"/>
				<Operator index="179" name="linear::DetectIncrease" excluded="true"/>
				<Operator index="180" name="linear::DetectFallNonPositive" excluded="true"/>
				<Operator index="181" name="linear::DetectFallNegative" excluded="true"/>
				<Operator index="182" name="linear::DetectDecrease" excluded="true"/>
				<Operator index="183" name="linear::DetectChange" excluded="true"/>
				<Operator index="184" name="linear::IntegralBackward" excluded="true"/>
				<Operator index="185" name="linear::IntegralTrapezoid" excluded="true"/>
				<Operator index="186" name="linear::IntegralForward" excluded="true"/>
				<Operator index="187" name="linear::IntegrTrapez" excluded="true"/>
				<Operator index="188" name="linear::IntegrFwd" excluded="true"/>
				<Operator index="189" name="filters::TransferFcn01" excluded="true"/>
				<Operator index="190" name="filters::SumDelay" excluded="true"/>
				<Operator index="191" name="filters::Filter01" excluded="true"/>
				<Operator index="192" name="filters::Filter11" excluded="true"/>
				<Operator index="193" name="filters::Filter0D" excluded="true"/>
				<Operator index="194" name="filters::FilterNN" excluded="true"/>
				<Operator index="195" name="filters::FilterND" excluded="true"/>
				<Operator index="196" name="filters::TransferFcn02" excluded="true"/>
				<Operator index="197" name="filters::Filter02" excluded="true"/>
				<Operator index="198" name="filters::TransferFcn0D" excluded="true"/>
				<Operator index="199" name="filters::Filter01Norm" excluded="true"/>
				<Operator index="200" name="filters::Filter12" excluded="true"/>
				<Operator index="201" name="filters::TransferFcn12" excluded="true"/>
				<Operator index="202" name="filters::TransferFcnND" excluded="true"/>
				<Operator index="203" name="filters::Filter02Norm" excluded="true"/>
				<Operator index="204" name="filters::Filter11Norm" excluded="true"/>
				<Operator index="205" name="filters::Filter12Norm" excluded="true"/>
				<Operator index="206" name="filters::Filter0DNorm" excluded="true"/>
				<Operator index="207" name="filters::FilterNDNorm" excluded="true"/>
				<Operator index="208" name="filters::FilterNNNorm" excluded="true"/>
				<Operator index="209" name="vect::ScalProd" excluded="true"/>
				<Operator index="210" name="vect::MatVectProd" excluded="true"/>
				<Operator index="211" name="vect::VectMatProd" excluded="true"/>
				<Operator index="212" name="vect::Det4x4" excluded="true"/>
				<Operator index="213" name="vect::Det3x3" excluded="true"/>
				<Operator index="214" name="vect::Det2x2" excluded="true"/>
				<Operator index="215" name="vect::VectSub" excluded="true"/>
				<Operator index="216" name="vect::VectAdd" excluded="true"/>
				<Operator index="217" name="vect::SumDup" excluded="true"/>
				<Operator index="218" name="vect::SelectorHelper" excluded="true"/>
				<Operator index="219" name="vect::Selector" excluded="true"/>
				<Operator index="220" name="math::Abs#3@Controller">
					<paths>
						<Path index="221" name="$if#2 -&gt; A_Output" criterionEntity="232"/>
						<Path index="222" name="$lte#1 -&gt; A_Output" AC=" not Controller/$lt#1 and  not Controller/$lt#2" criterionEntity="232"/>
					</paths>
					<rootPaths>
						<PathElement index="223" ident="math::Abs/A_Output" name="A_Output" scadeOid="s4_102/7236A702/F46/36A453FF/304A">
							<activationCondition>
								<ActivationCondition condition=" not Controller/$lt#1 and  not Controller/$lt#2"/>
							</activationCondition>
							<children>
								<PathElement index="224" ident="math::Abs/_L2" name="$if#2" scadeOid="s4_F3/7236A702/F46/36A453DF/3300" path="221">
									<children>
										<PathElement index="225" ident="math::Abs/_L1" name="$lte#1" scadeOid="s4_F1/7236A702/F46/36A453DF/363E" path="222">
											<children>
												<PathElement index="226" ident="math::Abs/_L8" name="$numeric_cast#1" scadeOid="!ed/6AD6/3B4B/16C/465EF729/39D">
													<children>
														<PathElement index="227" ident="math::Abs/_L8" name="$numeric_cast#1 i1" scadeOid="!ed/6AD6/3B4B/16C/465EF729/39D"/>
													</children>
												</PathElement>
												<PathElement index="228" ident="math::Abs/_L5" name="A_Input -&gt; $lte#1 i2" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5" rightExprIndex="1"/>
											</children>
										</PathElement>
										<PathElement index="229" ident="math::Abs/_L5" name="A_Input -&gt; $if#2 i1" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5">
											<activationCondition>
												<ActivationCondition condition="$lte#1"/>
											</activationCondition>
										</PathElement>
										<PathElement index="230" ident="math::Abs/_L3" name="$uminus#5" scadeOid="s4_F5/7236A702/F46/36A453DF/419E">
											<activationCondition>
												<ActivationCondition condition=" not $lte#1"/>
											</activationCondition>
											<children>
												<PathElement index="231" ident="math::Abs/_L5" name="A_Input -&gt; $uminus#5 i" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="232" name="MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1@math::Abs#3@Controller" kind="1"/>
				<Operator index="233" name="math::Abs#3@Check_Delta_3">
					<paths>
						<Path index="234" name="$if#2 -&gt; A_Output" criterionEntity="245"/>
						<Path index="235" name="$lte#1 -&gt; A_Output" AC="Check_Delta_3/outputs activated or Check_Delta_3/$gt#1 and Check_Delta_3/$gt#2 and Check_Delta_3/outputs activated" criterionEntity="245"/>
					</paths>
					<rootPaths>
						<PathElement index="236" ident="math::Abs/A_Output" name="A_Output" scadeOid="s4_102/7236A702/F46/36A453FF/304A">
							<activationCondition>
								<ActivationCondition condition="Check_Delta_3/outputs activated or Check_Delta_3/$gt#1 and Check_Delta_3/$gt#2 and Check_Delta_3/outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="237" ident="math::Abs/_L2" name="$if#2" scadeOid="s4_F3/7236A702/F46/36A453DF/3300" path="234">
									<children>
										<PathElement index="238" ident="math::Abs/_L1" name="$lte#1" scadeOid="s4_F1/7236A702/F46/36A453DF/363E" path="235">
											<children>
												<PathElement index="239" ident="math::Abs/_L8" name="$numeric_cast#1" scadeOid="!ed/6AD6/3B4B/16C/465EF729/39D">
													<children>
														<PathElement index="240" ident="math::Abs/_L8" name="$numeric_cast#1 i1" scadeOid="!ed/6AD6/3B4B/16C/465EF729/39D"/>
													</children>
												</PathElement>
												<PathElement index="241" ident="math::Abs/_L5" name="A_Input -&gt; $lte#1 i2" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5" rightExprIndex="1"/>
											</children>
										</PathElement>
										<PathElement index="242" ident="math::Abs/_L5" name="A_Input -&gt; $if#2 i1" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5">
											<activationCondition>
												<ActivationCondition condition="$lte#1"/>
											</activationCondition>
										</PathElement>
										<PathElement index="243" ident="math::Abs/_L3" name="$uminus#5" scadeOid="s4_F5/7236A702/F46/36A453DF/419E">
											<activationCondition>
												<ActivationCondition condition=" not $lte#1"/>
											</activationCondition>
											<children>
												<PathElement index="244" ident="math::Abs/_L5" name="A_Input -&gt; $uminus#5 i" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="245" name="MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1@math::Abs#3@Check_Delta_3" kind="1"/>
				<Operator index="246" name="math::Abs#2@Controller">
					<paths>
						<Path index="247" name="$if#2 -&gt; A_Output" criterionEntity="258"/>
						<Path index="248" name="$lte#1 -&gt; A_Output" AC=" not Controller/$lt#1 and  not Controller/$lt#3" criterionEntity="258"/>
					</paths>
					<rootPaths>
						<PathElement index="249" ident="math::Abs/A_Output" name="A_Output" scadeOid="s4_102/7236A702/F46/36A453FF/304A">
							<activationCondition>
								<ActivationCondition condition=" not Controller/$lt#1 and  not Controller/$lt#3"/>
							</activationCondition>
							<children>
								<PathElement index="250" ident="math::Abs/_L2" name="$if#2" scadeOid="s4_F3/7236A702/F46/36A453DF/3300" path="247">
									<children>
										<PathElement index="251" ident="math::Abs/_L1" name="$lte#1" scadeOid="s4_F1/7236A702/F46/36A453DF/363E" path="248">
											<children>
												<PathElement index="252" ident="math::Abs/_L8" name="$numeric_cast#1" scadeOid="!ed/6AD6/3B4B/16C/465EF729/39D">
													<children>
														<PathElement index="253" ident="math::Abs/_L8" name="$numeric_cast#1 i1" scadeOid="!ed/6AD6/3B4B/16C/465EF729/39D"/>
													</children>
												</PathElement>
												<PathElement index="254" ident="math::Abs/_L5" name="A_Input -&gt; $lte#1 i2" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5" rightExprIndex="1"/>
											</children>
										</PathElement>
										<PathElement index="255" ident="math::Abs/_L5" name="A_Input -&gt; $if#2 i1" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5">
											<activationCondition>
												<ActivationCondition condition="$lte#1"/>
											</activationCondition>
										</PathElement>
										<PathElement index="256" ident="math::Abs/_L3" name="$uminus#5" scadeOid="s4_F5/7236A702/F46/36A453DF/419E">
											<activationCondition>
												<ActivationCondition condition=" not $lte#1"/>
											</activationCondition>
											<children>
												<PathElement index="257" ident="math::Abs/_L5" name="A_Input -&gt; $uminus#5 i" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="258" name="MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1@math::Abs#2@Controller" kind="1"/>
				<Operator index="259" name="math::Abs#2@Check_Delta_3">
					<paths>
						<Path index="260" name="$if#2 -&gt; A_Output" criterionEntity="271"/>
						<Path index="261" name="$lte#1 -&gt; A_Output" AC="Check_Delta_3/outputs activated or Check_Delta_3/$gt#1 and Check_Delta_3/$gt#3 and Check_Delta_3/outputs activated" criterionEntity="271"/>
					</paths>
					<rootPaths>
						<PathElement index="262" ident="math::Abs/A_Output" name="A_Output" scadeOid="s4_102/7236A702/F46/36A453FF/304A">
							<activationCondition>
								<ActivationCondition condition="Check_Delta_3/outputs activated or Check_Delta_3/$gt#1 and Check_Delta_3/$gt#3 and Check_Delta_3/outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="263" ident="math::Abs/_L2" name="$if#2" scadeOid="s4_F3/7236A702/F46/36A453DF/3300" path="260">
									<children>
										<PathElement index="264" ident="math::Abs/_L1" name="$lte#1" scadeOid="s4_F1/7236A702/F46/36A453DF/363E" path="261">
											<children>
												<PathElement index="265" ident="math::Abs/_L8" name="$numeric_cast#1" scadeOid="!ed/6AD6/3B4B/16C/465EF729/39D">
													<children>
														<PathElement index="266" ident="math::Abs/_L8" name="$numeric_cast#1 i1" scadeOid="!ed/6AD6/3B4B/16C/465EF729/39D"/>
													</children>
												</PathElement>
												<PathElement index="267" ident="math::Abs/_L5" name="A_Input -&gt; $lte#1 i2" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5" rightExprIndex="1"/>
											</children>
										</PathElement>
										<PathElement index="268" ident="math::Abs/_L5" name="A_Input -&gt; $if#2 i1" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5">
											<activationCondition>
												<ActivationCondition condition="$lte#1"/>
											</activationCondition>
										</PathElement>
										<PathElement index="269" ident="math::Abs/_L3" name="$uminus#5" scadeOid="s4_F5/7236A702/F46/36A453DF/419E">
											<activationCondition>
												<ActivationCondition condition=" not $lte#1"/>
											</activationCondition>
											<children>
												<PathElement index="270" ident="math::Abs/_L5" name="A_Input -&gt; $uminus#5 i" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="271" name="MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1@math::Abs#2@Check_Delta_3" kind="1"/>
				<Operator index="272" name="math::Abs#1@Controller">
					<paths>
						<Path index="273" name="$if#2 -&gt; A_Output" criterionEntity="284"/>
						<Path index="274" name="$lte#1 -&gt; A_Output" AC=" not Controller/$lt#2 and  not Controller/$lt#3" criterionEntity="284"/>
					</paths>
					<rootPaths>
						<PathElement index="275" ident="math::Abs/A_Output" name="A_Output" scadeOid="s4_102/7236A702/F46/36A453FF/304A">
							<activationCondition>
								<ActivationCondition condition=" not Controller/$lt#2 and  not Controller/$lt#3"/>
							</activationCondition>
							<children>
								<PathElement index="276" ident="math::Abs/_L2" name="$if#2" scadeOid="s4_F3/7236A702/F46/36A453DF/3300" path="273">
									<children>
										<PathElement index="277" ident="math::Abs/_L1" name="$lte#1" scadeOid="s4_F1/7236A702/F46/36A453DF/363E" path="274">
											<children>
												<PathElement index="278" ident="math::Abs/_L8" name="$numeric_cast#1" scadeOid="!ed/6AD6/3B4B/16C/465EF729/39D">
													<children>
														<PathElement index="279" ident="math::Abs/_L8" name="$numeric_cast#1 i1" scadeOid="!ed/6AD6/3B4B/16C/465EF729/39D"/>
													</children>
												</PathElement>
												<PathElement index="280" ident="math::Abs/_L5" name="A_Input -&gt; $lte#1 i2" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5" rightExprIndex="1"/>
											</children>
										</PathElement>
										<PathElement index="281" ident="math::Abs/_L5" name="A_Input -&gt; $if#2 i1" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5">
											<activationCondition>
												<ActivationCondition condition="$lte#1"/>
											</activationCondition>
										</PathElement>
										<PathElement index="282" ident="math::Abs/_L3" name="$uminus#5" scadeOid="s4_F5/7236A702/F46/36A453DF/419E">
											<activationCondition>
												<ActivationCondition condition=" not $lte#1"/>
											</activationCondition>
											<children>
												<PathElement index="283" ident="math::Abs/_L5" name="A_Input -&gt; $uminus#5 i" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="284" name="MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1@math::Abs#1@Controller" kind="1"/>
				<Operator index="285" name="math::Abs#1@Check_Delta_3">
					<paths>
						<Path index="286" name="$if#2 -&gt; A_Output" criterionEntity="297"/>
						<Path index="287" name="$lte#1 -&gt; A_Output" AC="Check_Delta_3/outputs activated or Check_Delta_3/$gt#2 and Check_Delta_3/$gt#3 and Check_Delta_3/outputs activated" criterionEntity="297"/>
					</paths>
					<rootPaths>
						<PathElement index="288" ident="math::Abs/A_Output" name="A_Output" scadeOid="s4_102/7236A702/F46/36A453FF/304A">
							<activationCondition>
								<ActivationCondition condition="Check_Delta_3/outputs activated or Check_Delta_3/$gt#2 and Check_Delta_3/$gt#3 and Check_Delta_3/outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="289" ident="math::Abs/_L2" name="$if#2" scadeOid="s4_F3/7236A702/F46/36A453DF/3300" path="286">
									<children>
										<PathElement index="290" ident="math::Abs/_L1" name="$lte#1" scadeOid="s4_F1/7236A702/F46/36A453DF/363E" path="287">
											<children>
												<PathElement index="291" ident="math::Abs/_L8" name="$numeric_cast#1" scadeOid="!ed/6AD6/3B4B/16C/465EF729/39D">
													<children>
														<PathElement index="292" ident="math::Abs/_L8" name="$numeric_cast#1 i1" scadeOid="!ed/6AD6/3B4B/16C/465EF729/39D"/>
													</children>
												</PathElement>
												<PathElement index="293" ident="math::Abs/_L5" name="A_Input -&gt; $lte#1 i2" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5" rightExprIndex="1"/>
											</children>
										</PathElement>
										<PathElement index="294" ident="math::Abs/_L5" name="A_Input -&gt; $if#2 i1" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5">
											<activationCondition>
												<ActivationCondition condition="$lte#1"/>
											</activationCondition>
										</PathElement>
										<PathElement index="295" ident="math::Abs/_L3" name="$uminus#5" scadeOid="s4_F5/7236A702/F46/36A453DF/419E">
											<activationCondition>
												<ActivationCondition condition=" not $lte#1"/>
											</activationCondition>
											<children>
												<PathElement index="296" ident="math::Abs/_L5" name="A_Input -&gt; $uminus#5 i" scadeOid="s4_FF/7236A702/F46/36A453F2/5CC5"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="297" name="MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1@math::Abs#1@Check_Delta_3" kind="1"/>
				<Operator index="298" name="math::BoolToInt16" excluded="true"/>
				<Operator index="299" name="math::BoolToFloat32" excluded="true"/>
				<Operator index="300" name="math::InRangeInIn" excluded="true"/>
				<Operator index="301" name="math::InRangeInOut" excluded="true"/>
				<Operator index="302" name="math::InRangeOutIn" excluded="true"/>
				<Operator index="303" name="math::InRangeOutOut" excluded="true"/>
				<Operator index="304" name="math::Max" excluded="true"/>
				<Operator index="305" name="math::Max3" excluded="true"/>
				<Operator index="306" name="math::Mean3#6@Check_Delta_3">
					<rootPaths>
						<PathElement index="307" ident="math::Mean3/Me3_Output" name="Me3_Output" scadeOid="s4_5EE/8088D392/2767/39CF8916/12AA">
							<activationCondition>
								<ActivationCondition condition="Check_Delta_3/outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="308" ident="math::Mean3/_L5" name="$rdiv#2" scadeOid="s4_5E6/8088D392/2767/39CF88E7/139C">
									<children>
										<PathElement index="309" ident="math::Mean3/_L4" name="$plus#1" scadeOid="s4_5DC/8088D392/2767/39CF88C2/6FA6">
											<children>
												<PathElement index="310" ident="math::Mean3/_L1" name="I1" scadeOid="s4_5CE/8088D392/2767/39CF88A0/7C88"/>
												<PathElement index="311" ident="math::Mean3/_L2" name="I2" scadeOid="s4_5D3/8088D392/2767/39CF88AE/160F" rightExprIndex="1"/>
												<PathElement index="312" ident="math::Mean3/_L3" name="I3" scadeOid="s4_5D8/8088D392/2767/39CF88BD/5A2B" rightExprIndex="2"/>
											</children>
										</PathElement>
										<PathElement index="313" ident="math::Mean3/_L7" name="$numeric_cast#1" scadeOid="!ed/22648/1BA/3B24/5440c5a31e6e" rightExprIndex="1">
											<children>
												<PathElement index="314" ident="math::Mean3/_L7" name="$numeric_cast#1 i1" scadeOid="!ed/22648/1BA/3B24/5440c5a31e6e"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="315" name="math::Mean3#4@Check_Delta_3">
					<rootPaths>
						<PathElement index="316" ident="math::Mean3/Me3_Output" name="Me3_Output" scadeOid="s4_5EE/8088D392/2767/39CF8916/12AA">
							<activationCondition>
								<ActivationCondition condition="Check_Delta_3/outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="317" ident="math::Mean3/_L5" name="$rdiv#2" scadeOid="s4_5E6/8088D392/2767/39CF88E7/139C">
									<children>
										<PathElement index="318" ident="math::Mean3/_L4" name="$plus#1" scadeOid="s4_5DC/8088D392/2767/39CF88C2/6FA6">
											<children>
												<PathElement index="319" ident="math::Mean3/_L1" name="I1" scadeOid="s4_5CE/8088D392/2767/39CF88A0/7C88"/>
												<PathElement index="320" ident="math::Mean3/_L2" name="I2" scadeOid="s4_5D3/8088D392/2767/39CF88AE/160F" rightExprIndex="1"/>
												<PathElement index="321" ident="math::Mean3/_L3" name="I3" scadeOid="s4_5D8/8088D392/2767/39CF88BD/5A2B" rightExprIndex="2"/>
											</children>
										</PathElement>
										<PathElement index="322" ident="math::Mean3/_L7" name="$numeric_cast#1" scadeOid="!ed/22648/1BA/3B24/5440c5a31e6e" rightExprIndex="1">
											<children>
												<PathElement index="323" ident="math::Mean3/_L7" name="$numeric_cast#1 i1" scadeOid="!ed/22648/1BA/3B24/5440c5a31e6e"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="324" name="math::Mean3#1@Check_Delta_3">
					<rootPaths>
						<PathElement index="325" ident="math::Mean3/Me3_Output" name="Me3_Output" scadeOid="s4_5EE/8088D392/2767/39CF8916/12AA">
							<activationCondition>
								<ActivationCondition condition="Check_Delta_3/outputs activated or Check_Delta_3/$gt#1 and Check_Delta_3/$gt#2 and Check_Delta_3/outputs activated or Check_Delta_3/math::Abs#3/$lte#1 and (Check_Delta_3/outputs activated or Check_Delta_3/$gt#1 and Check_Delta_3/$gt#2 and Check_Delta_3/outputs activated) or  not Check_Delta_3/math::Abs#3/$lte#1 and (Check_Delta_3/outputs activated or Check_Delta_3/$gt#1 and Check_Delta_3/$gt#2 and Check_Delta_3/outputs activated) or Check_Delta_3/$gt#1 and Check_Delta_3/$gt#3 and Check_Delta_3/outputs activated or Check_Delta_3/math::Abs#2/$lte#1 and (Check_Delta_3/outputs activated or Check_Delta_3/$gt#1 and Check_Delta_3/$gt#3 and Check_Delta_3/outputs activated) or  not Check_Delta_3/math::Abs#2/$lte#1 and (Check_Delta_3/outputs activated or Check_Delta_3/$gt#1 and Check_Delta_3/$gt#3 and Check_Delta_3/outputs activated) or Check_Delta_3/$gt#2 and Check_Delta_3/$gt#3 and Check_Delta_3/outputs activated or Check_Delta_3/math::Abs#1/$lte#1 and (Check_Delta_3/outputs activated or Check_Delta_3/$gt#2 and Check_Delta_3/$gt#3 and Check_Delta_3/outputs activated) or  not Check_Delta_3/math::Abs#1/$lte#1 and (Check_Delta_3/outputs activated or Check_Delta_3/$gt#2 and Check_Delta_3/$gt#3 and Check_Delta_3/outputs activated)"/>
							</activationCondition>
							<children>
								<PathElement index="326" ident="math::Mean3/_L5" name="$rdiv#2" scadeOid="s4_5E6/8088D392/2767/39CF88E7/139C">
									<children>
										<PathElement index="327" ident="math::Mean3/_L4" name="$plus#1" scadeOid="s4_5DC/8088D392/2767/39CF88C2/6FA6">
											<children>
												<PathElement index="328" ident="math::Mean3/_L1" name="I1" scadeOid="s4_5CE/8088D392/2767/39CF88A0/7C88"/>
												<PathElement index="329" ident="math::Mean3/_L2" name="I2" scadeOid="s4_5D3/8088D392/2767/39CF88AE/160F" rightExprIndex="1"/>
												<PathElement index="330" ident="math::Mean3/_L3" name="I3" scadeOid="s4_5D8/8088D392/2767/39CF88BD/5A2B" rightExprIndex="2"/>
											</children>
										</PathElement>
										<PathElement index="331" ident="math::Mean3/_L7" name="$numeric_cast#1" scadeOid="!ed/22648/1BA/3B24/5440c5a31e6e" rightExprIndex="1">
											<children>
												<PathElement index="332" ident="math::Mean3/_L7" name="$numeric_cast#1 i1" scadeOid="!ed/22648/1BA/3B24/5440c5a31e6e"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="333" name="math::Min" excluded="true"/>
				<Operator index="334" name="math::Min3" excluded="true"/>
				<Operator index="335" name="math::Sign" excluded="true"/>
				<Operator index="336" name="math::Mean#5@Calculated_value">
					<rootPaths>
						<PathElement index="337" ident="math::Mean/Me_output" name="Me_output" scadeOid="s4_5C2/8088D392/2767/39CF8832/6F53">
							<activationCondition>
								<ActivationCondition condition="Calculated_value/outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="338" ident="math::Mean/_L3" name="$rdiv#1" scadeOid="s4_5B2/8088D392/2767/39CF87FA/6AE9">
									<children>
										<PathElement index="339" ident="math::Mean/_L4" name="$plus#2" scadeOid="s4_5B7/8088D392/2767/39CF87FF/4C64">
											<children>
												<PathElement index="340" ident="math::Mean/_L1" name="I1" scadeOid="s4_5A7/8088D392/2767/39CF87DC/6DEA"/>
												<PathElement index="341" ident="math::Mean/_L2" name="I2" scadeOid="s4_5AC/8088D392/2767/39CF87EE/6696" rightExprIndex="1"/>
											</children>
										</PathElement>
										<PathElement index="342" ident="math::Mean/_L6" name="$numeric_cast#1" scadeOid="!ed/137d3/1BA/3B24/5440c4cf4f2b" rightExprIndex="1">
											<children>
												<PathElement index="343" ident="math::Mean/_L6" name="$numeric_cast#1 i1" scadeOid="!ed/137d3/1BA/3B24/5440c4cf4f2b"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="344" name="math::Mean#3@Check_Delta_3">
					<rootPaths>
						<PathElement index="345" ident="math::Mean/Me_output" name="Me_output" scadeOid="s4_5C2/8088D392/2767/39CF8832/6F53">
							<activationCondition>
								<ActivationCondition condition="Check_Delta_3/outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="346" ident="math::Mean/_L3" name="$rdiv#1" scadeOid="s4_5B2/8088D392/2767/39CF87FA/6AE9">
									<children>
										<PathElement index="347" ident="math::Mean/_L4" name="$plus#2" scadeOid="s4_5B7/8088D392/2767/39CF87FF/4C64">
											<children>
												<PathElement index="348" ident="math::Mean/_L1" name="I1" scadeOid="s4_5A7/8088D392/2767/39CF87DC/6DEA"/>
												<PathElement index="349" ident="math::Mean/_L2" name="I2" scadeOid="s4_5AC/8088D392/2767/39CF87EE/6696" rightExprIndex="1"/>
											</children>
										</PathElement>
										<PathElement index="350" ident="math::Mean/_L6" name="$numeric_cast#1" scadeOid="!ed/137d3/1BA/3B24/5440c4cf4f2b" rightExprIndex="1">
											<children>
												<PathElement index="351" ident="math::Mean/_L6" name="$numeric_cast#1 i1" scadeOid="!ed/137d3/1BA/3B24/5440c4cf4f2b"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="352" name="math::Mean#3@Calculated_value">
					<rootPaths>
						<PathElement index="353" ident="math::Mean/Me_output" name="Me_output" scadeOid="s4_5C2/8088D392/2767/39CF8832/6F53">
							<activationCondition>
								<ActivationCondition condition="Calculated_value/outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="354" ident="math::Mean/_L3" name="$rdiv#1" scadeOid="s4_5B2/8088D392/2767/39CF87FA/6AE9">
									<children>
										<PathElement index="355" ident="math::Mean/_L4" name="$plus#2" scadeOid="s4_5B7/8088D392/2767/39CF87FF/4C64">
											<children>
												<PathElement index="356" ident="math::Mean/_L1" name="I1" scadeOid="s4_5A7/8088D392/2767/39CF87DC/6DEA"/>
												<PathElement index="357" ident="math::Mean/_L2" name="I2" scadeOid="s4_5AC/8088D392/2767/39CF87EE/6696" rightExprIndex="1"/>
											</children>
										</PathElement>
										<PathElement index="358" ident="math::Mean/_L6" name="$numeric_cast#1" scadeOid="!ed/137d3/1BA/3B24/5440c4cf4f2b" rightExprIndex="1">
											<children>
												<PathElement index="359" ident="math::Mean/_L6" name="$numeric_cast#1 i1" scadeOid="!ed/137d3/1BA/3B24/5440c4cf4f2b"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="360" name="math::Mean#2@Check_Delta_3">
					<rootPaths>
						<PathElement index="361" ident="math::Mean/Me_output" name="Me_output" scadeOid="s4_5C2/8088D392/2767/39CF8832/6F53">
							<activationCondition>
								<ActivationCondition condition="Check_Delta_3/outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="362" ident="math::Mean/_L3" name="$rdiv#1" scadeOid="s4_5B2/8088D392/2767/39CF87FA/6AE9">
									<children>
										<PathElement index="363" ident="math::Mean/_L4" name="$plus#2" scadeOid="s4_5B7/8088D392/2767/39CF87FF/4C64">
											<children>
												<PathElement index="364" ident="math::Mean/_L1" name="I1" scadeOid="s4_5A7/8088D392/2767/39CF87DC/6DEA"/>
												<PathElement index="365" ident="math::Mean/_L2" name="I2" scadeOid="s4_5AC/8088D392/2767/39CF87EE/6696" rightExprIndex="1"/>
											</children>
										</PathElement>
										<PathElement index="366" ident="math::Mean/_L6" name="$numeric_cast#1" scadeOid="!ed/137d3/1BA/3B24/5440c4cf4f2b" rightExprIndex="1">
											<children>
												<PathElement index="367" ident="math::Mean/_L6" name="$numeric_cast#1 i1" scadeOid="!ed/137d3/1BA/3B24/5440c4cf4f2b"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="368" name="math::Mean#1@Check_Delta_3">
					<rootPaths>
						<PathElement index="369" ident="math::Mean/Me_output" name="Me_output" scadeOid="s4_5C2/8088D392/2767/39CF8832/6F53">
							<activationCondition>
								<ActivationCondition condition="Check_Delta_3/outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="370" ident="math::Mean/_L3" name="$rdiv#1" scadeOid="s4_5B2/8088D392/2767/39CF87FA/6AE9">
									<children>
										<PathElement index="371" ident="math::Mean/_L4" name="$plus#2" scadeOid="s4_5B7/8088D392/2767/39CF87FF/4C64">
											<children>
												<PathElement index="372" ident="math::Mean/_L1" name="I1" scadeOid="s4_5A7/8088D392/2767/39CF87DC/6DEA"/>
												<PathElement index="373" ident="math::Mean/_L2" name="I2" scadeOid="s4_5AC/8088D392/2767/39CF87EE/6696" rightExprIndex="1"/>
											</children>
										</PathElement>
										<PathElement index="374" ident="math::Mean/_L6" name="$numeric_cast#1" scadeOid="!ed/137d3/1BA/3B24/5440c4cf4f2b" rightExprIndex="1">
											<children>
												<PathElement index="375" ident="math::Mean/_L6" name="$numeric_cast#1 i1" scadeOid="!ed/137d3/1BA/3B24/5440c4cf4f2b"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="376" name="math::Mean#1@Calculated_value">
					<rootPaths>
						<PathElement index="377" ident="math::Mean/Me_output" name="Me_output" scadeOid="s4_5C2/8088D392/2767/39CF8832/6F53">
							<activationCondition>
								<ActivationCondition condition="Calculated_value/outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="378" ident="math::Mean/_L3" name="$rdiv#1" scadeOid="s4_5B2/8088D392/2767/39CF87FA/6AE9">
									<children>
										<PathElement index="379" ident="math::Mean/_L4" name="$plus#2" scadeOid="s4_5B7/8088D392/2767/39CF87FF/4C64">
											<children>
												<PathElement index="380" ident="math::Mean/_L1" name="I1" scadeOid="s4_5A7/8088D392/2767/39CF87DC/6DEA"/>
												<PathElement index="381" ident="math::Mean/_L2" name="I2" scadeOid="s4_5AC/8088D392/2767/39CF87EE/6696" rightExprIndex="1"/>
											</children>
										</PathElement>
										<PathElement index="382" ident="math::Mean/_L6" name="$numeric_cast#1" scadeOid="!ed/137d3/1BA/3B24/5440c4cf4f2b" rightExprIndex="1">
											<children>
												<PathElement index="383" ident="math::Mean/_L6" name="$numeric_cast#1 i1" scadeOid="!ed/137d3/1BA/3B24/5440c4cf4f2b"/>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
				</Operator>
				<Operator index="384" name="math::Round" excluded="true"/>
				<Operator index="385" name="math::ByteToUint8" excluded="true"/>
				<Operator index="386" name="math::RoundCeil" excluded="true"/>
				<Operator index="387" name="math::RoundFloor" excluded="true"/>
				<Operator index="388" name="math::IntToBool" excluded="true"/>
				<Operator index="389" name="math::RealToBool" excluded="true"/>
				<Operator index="390" name="math::BoolToInt32" excluded="true"/>
				<Operator index="391" name="math::BoolToUint8" excluded="true"/>
				<Operator index="392" name="math::BoolToInt64" excluded="true"/>
				<Operator index="393" name="math::BoolToInt8" excluded="true"/>
				<Operator index="394" name="math::BoolToUint64" excluded="true"/>
				<Operator index="395" name="math::BoolToUint16" excluded="true"/>
				<Operator index="396" name="math::BoolToUint32" excluded="true"/>
				<Operator index="397" name="math::BoolToFloat64" excluded="true"/>
				<Operator index="398" name="math::NumericToUint8" excluded="true"/>
				<Operator index="399" name="math::NumericToInt8" excluded="true"/>
				<Operator index="400" name="math::NumericToInt16" excluded="true"/>
				<Operator index="401" name="math::NumericToInt32" excluded="true"/>
				<Operator index="402" name="math::NumericToInt64" excluded="true"/>
				<Operator index="403" name="math::NumericToUint16" excluded="true"/>
				<Operator index="404" name="math::NumericToUint32" excluded="true"/>
				<Operator index="405" name="math::NumericToUint64" excluded="true"/>
				<Operator index="406" name="math::NumericToFloat64" excluded="true"/>
				<Operator index="407" name="math::NumericToFloat32" excluded="true"/>
				<Operator index="408" name="math::PolynomialStep" excluded="true"/>
				<Operator index="409" name="math::Polynomial" excluded="true"/>
				<Operator index="410" name="math::Mod" excluded="true"/>
				<Operator index="411" name="mathext::AcosR" excluded="true"/>
				<Operator index="412" name="mathext::AcoshR" excluded="true"/>
				<Operator index="413" name="mathext::AsinR" excluded="true"/>
				<Operator index="414" name="mathext::AsinhR" excluded="true"/>
				<Operator index="415" name="mathext::Atan2R" excluded="true"/>
				<Operator index="416" name="mathext::AtanR" excluded="true"/>
				<Operator index="417" name="mathext::AtanhR" excluded="true"/>
				<Operator index="418" name="mathext::CosR" excluded="true"/>
				<Operator index="419" name="mathext::CoshR" excluded="true"/>
				<Operator index="420" name="mathext::ExpR" excluded="true"/>
				<Operator index="421" name="mathext::LnR" excluded="true"/>
				<Operator index="422" name="mathext::LogR" excluded="true"/>
				<Operator index="423" name="mathext::PowerRR" excluded="true"/>
				<Operator index="424" name="mathext::SinR" excluded="true"/>
				<Operator index="425" name="mathext::SinhR" excluded="true"/>
				<Operator index="426" name="mathext::SqrtR" excluded="true"/>
				<Operator index="427" name="mathext::TanR" excluded="true"/>
				<Operator index="428" name="mathext::TanhR" excluded="true"/>
				<Operator index="429" name="mathext::TenPowR" excluded="true"/>
				<Operator index="430" name="mathext::Square" excluded="true"/>
				<Operator index="431" name="mathext::Inv" excluded="true"/>
				<Operator index="432" name="mathext::HypotR" excluded="true"/>
				<Operator index="433" name="mathext::PowerI" excluded="true"/>
				<Operator index="434" name="mathext::PowerR" excluded="true"/>
				<Operator index="435" name="mathext::SinCosR" excluded="true"/>
				<Operator index="436" name="mathext::SphericalToCartesian" excluded="true"/>
				<Operator index="437" name="mathext::RadiansToDegrees" excluded="true"/>
				<Operator index="438" name="mathext::PolarToCartesian" excluded="true"/>
				<Operator index="439" name="mathext::FahrenheitToCelsius" excluded="true"/>
				<Operator index="440" name="mathext::DegreesToRadians" excluded="true"/>
				<Operator index="441" name="mathext::CelsiusToFahrenheit" excluded="true"/>
				<Operator index="442" name="mathext::CartesianToSpherical" excluded="true"/>
				<Operator index="443" name="mathext::CartesianToPolar" excluded="true"/>
				<Operator index="444" name="mathext::mathextimpl::AcoshR32" excluded="true"/>
				<Operator index="445" name="mathext::mathextimpl::AcosR32" excluded="true"/>
				<Operator index="446" name="mathext::mathextimpl::AsinhR32" excluded="true"/>
				<Operator index="447" name="mathext::mathextimpl::AsinR32" excluded="true"/>
				<Operator index="448" name="mathext::mathextimpl::Atan2R32" excluded="true"/>
				<Operator index="449" name="mathext::mathextimpl::AtanhR32" excluded="true"/>
				<Operator index="450" name="mathext::mathextimpl::AtanR32" excluded="true"/>
				<Operator index="451" name="mathext::mathextimpl::CoshR32" excluded="true"/>
				<Operator index="452" name="mathext::mathextimpl::CosR32" excluded="true"/>
				<Operator index="453" name="mathext::mathextimpl::ExpR32" excluded="true"/>
				<Operator index="454" name="mathext::mathextimpl::LnR32" excluded="true"/>
				<Operator index="455" name="mathext::mathextimpl::LogR32" excluded="true"/>
				<Operator index="456" name="mathext::mathextimpl::PowerR32" excluded="true"/>
				<Operator index="457" name="mathext::mathextimpl::PowerRR32" excluded="true"/>
				<Operator index="458" name="mathext::mathextimpl::SinhR32" excluded="true"/>
				<Operator index="459" name="mathext::mathextimpl::SinR32" excluded="true"/>
				<Operator index="460" name="mathext::mathextimpl::SqrtR32" excluded="true"/>
				<Operator index="461" name="mathext::mathextimpl::TanhR32" excluded="true"/>
				<Operator index="462" name="mathext::mathextimpl::TanR32" excluded="true"/>
				<Operator index="463" name="mathext::mathextimpl::TenPowR32" excluded="true"/>
				<Operator index="464" name="mathext::mathextimpl::AcoshR64" excluded="true"/>
				<Operator index="465" name="mathext::mathextimpl::AcosR64" excluded="true"/>
				<Operator index="466" name="mathext::mathextimpl::AsinhR64" excluded="true"/>
				<Operator index="467" name="mathext::mathextimpl::AsinR64" excluded="true"/>
				<Operator index="468" name="mathext::mathextimpl::Atan2R64" excluded="true"/>
				<Operator index="469" name="mathext::mathextimpl::AtanhR64" excluded="true"/>
				<Operator index="470" name="mathext::mathextimpl::AtanR64" excluded="true"/>
				<Operator index="471" name="mathext::mathextimpl::CoshR64" excluded="true"/>
				<Operator index="472" name="mathext::mathextimpl::CosR64" excluded="true"/>
				<Operator index="473" name="mathext::mathextimpl::ExpR64" excluded="true"/>
				<Operator index="474" name="mathext::mathextimpl::LnR64" excluded="true"/>
				<Operator index="475" name="mathext::mathextimpl::LogR64" excluded="true"/>
				<Operator index="476" name="mathext::mathextimpl::PowerR64" excluded="true"/>
				<Operator index="477" name="mathext::mathextimpl::PowerRR64" excluded="true"/>
				<Operator index="478" name="mathext::mathextimpl::SinhR64" excluded="true"/>
				<Operator index="479" name="mathext::mathextimpl::SinR64" excluded="true"/>
				<Operator index="480" name="mathext::mathextimpl::SqrtR64" excluded="true"/>
				<Operator index="481" name="mathext::mathextimpl::TanhR64" excluded="true"/>
				<Operator index="482" name="mathext::mathextimpl::TanR64" excluded="true"/>
				<Operator index="483" name="mathext::mathextimpl::TenPowR64" excluded="true"/>
				<Operator index="484" name="mathext::mathextimpl::PowerI32" excluded="true"/>
				<Operator index="485" name="pwlinear::LimiterUnSymmetrical" excluded="true"/>
				<Operator index="486" name="pwlinear::PreLoadUnSymmetrical" excluded="true"/>
				<Operator index="487" name="pwlinear::ClockCounter" excluded="true"/>
				<Operator index="488" name="pwlinear::Quantizer" excluded="true"/>
				<Operator index="489" name="pwlinear::RateLimiter" excluded="true"/>
				<Operator index="490" name="pwlinear::Counter" excluded="true"/>
				<Operator index="491" name="pwlinear::FallingHysteresis" excluded="true"/>
				<Operator index="492" name="pwlinear::RisingHysteresis" excluded="true"/>
				<Operator index="493" name="pwlinear::LimiterSymmetrical" excluded="true"/>
				<Operator index="494" name="pwlinear::PreLoadSymmetrical" excluded="true"/>
				<Operator index="495" name="pwlinear::DeadBandUnSymmetrical" excluded="true"/>
				<Operator index="496" name="pwlinear::DeadBandSymmetrical" excluded="true"/>
				<Operator index="497" name="pwlinear::MinReset" excluded="true"/>
				<Operator index="498" name="pwlinear::MaxReset" excluded="true"/>
				<Operator index="499" name="pwlinear::CheckSlope" excluded="true"/>
				<Operator index="500" name="lut::Interp1D" excluded="true"/>
				<Operator index="501" name="lut::Interp2DFloor" excluded="true"/>
				<Operator index="502" name="lut::PreLutDirect" excluded="true"/>
				<Operator index="503" name="lut::SearchIdxFloor" excluded="true"/>
				<Operator index="504" name="lut::SearchIdxCeil" excluded="true"/>
				<Operator index="505" name="lut::SearchNearest" excluded="true"/>
				<Operator index="506" name="lut::Lut2DNearest" excluded="true"/>
				<Operator index="507" name="lut::Interp1DFloor" excluded="true"/>
				<Operator index="508" name="lut::Interp2D" excluded="true"/>
				<Operator index="509" name="lut::SearchIdx" excluded="true"/>
				<Operator index="510" name="lut::Proj" excluded="true"/>
				<Operator index="511" name="lut::PreLutNoSat" excluded="true"/>
				<Operator index="512" name="lut::Limiter" excluded="true"/>
				<Operator index="513" name="lut::InterpolateLinear" excluded="true"/>
				<Operator index="514" name="lut::Lut1DFloor" excluded="true"/>
				<Operator index="515" name="lut::Lut3DNearest" excluded="true"/>
				<Operator index="516" name="lut::Lut2DNoSat" excluded="true"/>
				<Operator index="517" name="lut::Lut3DNoSat" excluded="true"/>
				<Operator index="518" name="lut::Limiter2" excluded="true"/>
				<Operator index="519" name="verif::HasNeverBeenTrue" excluded="true"/>
				<Operator index="520" name="verif::Implies" excluded="true"/>
				<Operator index="521" name="verif::AtLeastNTicks" excluded="true"/>
				<Operator index="522" name="verif::ImpliesWithinNTick" excluded="true"/>
				<Operator index="523" name="verif::AfterNthTick" excluded="true"/>
				<Operator index="524" name="Check_Delta_3">
					<paths>
						<Path index="525" name="fail1" AC="outputs activated" criterionEntity="701"/>
						<Path index="526" name="$gt#1 -&gt; fail1" AC="outputs activated" criterionEntity="701"/>
						<Path index="527" name="fail2" AC="outputs activated" criterionEntity="703"/>
						<Path index="528" name="$gt#2 -&gt; fail2" AC="outputs activated" criterionEntity="703"/>
						<Path index="529" name="fail3" AC="outputs activated" criterionEntity="704"/>
						<Path index="530" name="$gt#3 -&gt; fail3" AC="outputs activated" criterionEntity="704"/>
						<Path index="531" name="all_fail" AC="outputs activated" criterionEntity="705"/>
						<Path index="532" name="$gt#1 -&gt; $and#3 i1 -&gt; all_fail" AC="$gt#2 and $gt#3 and outputs activated" criterionEntity="705"/>
						<Path index="533" name="$gt#2 -&gt; $and#3 i2 -&gt; all_fail" AC="$gt#1 and $gt#3 and outputs activated" criterionEntity="705"/>
						<Path index="534" name="$gt#3 -&gt; $and#3 i3 -&gt; all_fail" AC="$gt#1 and $gt#2 and outputs activated" criterionEntity="705"/>
						<Path index="535" name="$gt#1" AC="outputs activated or $gt#2 and $gt#3 and outputs activated" criterionEntity="706"/>
						<Path index="536" name="$gt#2" AC="outputs activated or $gt#1 and $gt#3 and outputs activated" criterionEntity="707"/>
						<Path index="537" name="$gt#3" AC="outputs activated or $gt#1 and $gt#2 and outputs activated" criterionEntity="708"/>
					</paths>
					<rootPaths>
						<PathElement index="538" ident="Check_Delta_3/fail1" name="fail1" scadeOid="!ed/4e29/552E/1160/5e3c0da63ac2" path="525">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="539" ident="Check_Delta_3/_L10" name="$gt#1 -&gt; fail1" scadeOid="!ed/4e11/552E/1160/5e3c0d85678f" path="526"/>
							</children>
						</PathElement>
						<PathElement index="540" ident="Check_Delta_3/_L7" name="math::Abs#1" scadeOid="!ed/4de5/552E/1160/5e3c0bda2c29">
							<children>
								<PathElement index="541" ident="Check_Delta_3/_L9" name="$minus#1" scadeOid="!ed/4e05/552E/1160/5e3c0d736200">
									<activationCondition>
										<ActivationCondition condition="outputs activated or $gt#2 and $gt#3 and outputs activated or math::Abs#1/$lte#1 and (outputs activated or $gt#2 and $gt#3 and outputs activated) or  not math::Abs#1/$lte#1 and (outputs activated or $gt#2 and $gt#3 and outputs activated)"/>
									</activationCondition>
									<children>
										<PathElement index="542" ident="Check_Delta_3/_L1" name="Input1 -&gt; $minus#1 i1" scadeOid="!ed/4d54/552E/1160/5e3c0aa07224"/>
										<PathElement index="543" ident="Check_Delta_3/_L8" name="math::Mean3#1 -&gt; $minus#1 i2" scadeOid="!ed/4df9/552E/1160/5e3c0d65690a" rightExprIndex="1"/>
									</children>
								</PathElement>
							</children>
						</PathElement>
						<PathElement index="544" ident="Check_Delta_3/_L8" name="math::Mean3#1" scadeOid="!ed/4df9/552E/1160/5e3c0d65690a">
							<children>
								<PathElement index="545" ident="Check_Delta_3/_L1" name="Input1 -&gt; math::Mean3#1 i1" scadeOid="!ed/4d54/552E/1160/5e3c0aa07224">
									<activationCondition>
										<ActivationCondition condition="outputs activated or $gt#1 and $gt#2 and outputs activated or math::Abs#3/$lte#1 and (outputs activated or $gt#1 and $gt#2 and outputs activated) or  not math::Abs#3/$lte#1 and (outputs activated or $gt#1 and $gt#2 and outputs activated) or $gt#1 and $gt#3 and outputs activated or math::Abs#2/$lte#1 and (outputs activated or $gt#1 and $gt#3 and outputs activated) or  not math::Abs#2/$lte#1 and (outputs activated or $gt#1 and $gt#3 and outputs activated) or $gt#2 and $gt#3 and outputs activated or math::Abs#1/$lte#1 and (outputs activated or $gt#2 and $gt#3 and outputs activated) or  not math::Abs#1/$lte#1 and (outputs activated or $gt#2 and $gt#3 and outputs activated)"/>
									</activationCondition>
								</PathElement>
								<PathElement index="546" ident="Check_Delta_3/_L2" name="Input2 -&gt; math::Mean3#1 i2" scadeOid="!ed/4d64/552E/1160/5e3c0aa13fbf" rightExprIndex="1">
									<activationCondition>
										<ActivationCondition condition="outputs activated or $gt#1 and $gt#2 and outputs activated or math::Abs#3/$lte#1 and (outputs activated or $gt#1 and $gt#2 and outputs activated) or  not math::Abs#3/$lte#1 and (outputs activated or $gt#1 and $gt#2 and outputs activated) or $gt#1 and $gt#3 and outputs activated or math::Abs#2/$lte#1 and (outputs activated or $gt#1 and $gt#3 and outputs activated) or  not math::Abs#2/$lte#1 and (outputs activated or $gt#1 and $gt#3 and outputs activated) or $gt#2 and $gt#3 and outputs activated or math::Abs#1/$lte#1 and (outputs activated or $gt#2 and $gt#3 and outputs activated) or  not math::Abs#1/$lte#1 and (outputs activated or $gt#2 and $gt#3 and outputs activated)"/>
									</activationCondition>
								</PathElement>
								<PathElement index="547" ident="Check_Delta_3/_L3" name="Input3 -&gt; math::Mean3#1 i3" scadeOid="!ed/4d74/552E/1160/5e3c0aa37565" rightExprIndex="2">
									<activationCondition>
										<ActivationCondition condition="outputs activated or $gt#1 and $gt#2 and outputs activated or math::Abs#3/$lte#1 and (outputs activated or $gt#1 and $gt#2 and outputs activated) or  not math::Abs#3/$lte#1 and (outputs activated or $gt#1 and $gt#2 and outputs activated) or $gt#1 and $gt#3 and outputs activated or math::Abs#2/$lte#1 and (outputs activated or $gt#1 and $gt#3 and outputs activated) or  not math::Abs#2/$lte#1 and (outputs activated or $gt#1 and $gt#3 and outputs activated) or $gt#2 and $gt#3 and outputs activated or math::Abs#1/$lte#1 and (outputs activated or $gt#2 and $gt#3 and outputs activated) or  not math::Abs#1/$lte#1 and (outputs activated or $gt#2 and $gt#3 and outputs activated)"/>
									</activationCondition>
								</PathElement>
							</children>
						</PathElement>
						<PathElement index="548" ident="Check_Delta_3/fail2" name="fail2" scadeOid="!ed/4e43/552E/1160/5e3c0dd7407f" path="527">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="549" ident="Check_Delta_3/_L12" name="$gt#2 -&gt; fail2" scadeOid="!ed/4e3c/552E/1160/5e3c0dbd4f44" path="528"/>
							</children>
						</PathElement>
						<PathElement index="550" ident="Check_Delta_3/_L14" name="math::Abs#2" scadeOid="!ed/4e40/552E/1160/5e3c0dbd6775">
							<children>
								<PathElement index="551" ident="Check_Delta_3/_L11" name="$minus#2" scadeOid="!ed/4e3a/552E/1160/5e3c0dbd1eed">
									<activationCondition>
										<ActivationCondition condition="outputs activated or $gt#1 and $gt#3 and outputs activated or math::Abs#2/$lte#1 and (outputs activated or $gt#1 and $gt#3 and outputs activated) or  not math::Abs#2/$lte#1 and (outputs activated or $gt#1 and $gt#3 and outputs activated)"/>
									</activationCondition>
									<children>
										<PathElement index="552" ident="Check_Delta_3/_L8" name="math::Mean3#1 -&gt; $minus#2 i1" scadeOid="!ed/4df9/552E/1160/5e3c0d65690a"/>
										<PathElement index="553" ident="Check_Delta_3/_L2" name="Input2 -&gt; $minus#2 i2" scadeOid="!ed/4d64/552E/1160/5e3c0aa13fbf" rightExprIndex="1"/>
									</children>
								</PathElement>
							</children>
						</PathElement>
						<PathElement index="554" ident="Check_Delta_3/fail3" name="fail3" scadeOid="!ed/4e66/552E/1160/5e3c0e105778" path="529">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="555" ident="Check_Delta_3/_L19" name="$gt#3 -&gt; fail3" scadeOid="!ed/4e5d/552E/1160/5e3c0dfe59f6" path="530"/>
							</children>
						</PathElement>
						<PathElement index="556" ident="Check_Delta_3/_L17" name="math::Abs#3" scadeOid="!ed/4e59/552E/1160/5e3c0dfe3119">
							<children>
								<PathElement index="557" ident="Check_Delta_3/_L16" name="$minus#3" scadeOid="!ed/4e57/552E/1160/5e3c0dfe1e67">
									<activationCondition>
										<ActivationCondition condition="outputs activated or $gt#1 and $gt#2 and outputs activated or math::Abs#3/$lte#1 and (outputs activated or $gt#1 and $gt#2 and outputs activated) or  not math::Abs#3/$lte#1 and (outputs activated or $gt#1 and $gt#2 and outputs activated)"/>
									</activationCondition>
									<children>
										<PathElement index="558" ident="Check_Delta_3/_L8" name="math::Mean3#1 -&gt; $minus#3 i1" scadeOid="!ed/4df9/552E/1160/5e3c0d65690a"/>
										<PathElement index="559" ident="Check_Delta_3/_L3" name="Input3 -&gt; $minus#3 i2" scadeOid="!ed/4d74/552E/1160/5e3c0aa37565" rightExprIndex="1"/>
									</children>
								</PathElement>
							</children>
						</PathElement>
						<PathElement index="560" ident="Check_Delta_3/all_fail" name="all_fail" scadeOid="!ed/4ef3/552E/1160/5e3c0efe60f6" path="531">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="561" ident="Check_Delta_3/_L20" name="$and#3" scadeOid="!ed/4efe/552E/1160/5e3c0f0e69f1">
									<children>
										<PathElement index="562" ident="Check_Delta_3/_L10" name="$gt#1 -&gt; $and#3 i1" scadeOid="!ed/4e11/552E/1160/5e3c0d85678f" path="532">
											<activationCondition>
												<ActivationCondition condition="$gt#2 and $gt#3"/>
											</activationCondition>
										</PathElement>
										<PathElement index="563" ident="Check_Delta_3/_L12" name="$gt#2 -&gt; $and#3 i2" scadeOid="!ed/4e3c/552E/1160/5e3c0dbd4f44" rightExprIndex="1" path="533">
											<activationCondition>
												<ActivationCondition condition="$gt#1 and $gt#3"/>
											</activationCondition>
										</PathElement>
										<PathElement index="564" ident="Check_Delta_3/_L19" name="$gt#3 -&gt; $and#3 i3" scadeOid="!ed/4e5d/552E/1160/5e3c0dfe59f6" rightExprIndex="2" path="534">
											<activationCondition>
												<ActivationCondition condition="$gt#1 and $gt#2"/>
											</activationCondition>
										</PathElement>
									</children>
								</PathElement>
							</children>
						</PathElement>
						<PathElement index="565" ident="Check_Delta_3/_L10" name="$gt#1" scadeOid="!ed/4e11/552E/1160/5e3c0d85678f" path="535">
							<activationCondition>
								<ActivationCondition condition="outputs activated or $gt#2 and $gt#3 and outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="566" ident="Check_Delta_3/_L7" name="math::Abs#1" scadeOid="!ed/4de5/552E/1160/5e3c0bda2c29"/>
								<PathElement index="567" ident="Check_Delta_3/_L4" name="Delta" scadeOid="!ed/4d9c/552E/1160/5e3c0aba6a23" rightExprIndex="1"/>
							</children>
						</PathElement>
						<PathElement index="568" ident="Check_Delta_3/_L12" name="$gt#2" scadeOid="!ed/4e3c/552E/1160/5e3c0dbd4f44" path="536">
							<activationCondition>
								<ActivationCondition condition="outputs activated or $gt#1 and $gt#3 and outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="569" ident="Check_Delta_3/_L14" name="math::Abs#2" scadeOid="!ed/4e40/552E/1160/5e3c0dbd6775"/>
								<PathElement index="570" ident="Check_Delta_3/_L13" name="Delta" scadeOid="!ed/4e3e/552E/1160/5e3c0dbd1a43" rightExprIndex="1"/>
							</children>
						</PathElement>
						<PathElement index="571" ident="Check_Delta_3/_L19" name="$gt#3" scadeOid="!ed/4e5d/552E/1160/5e3c0dfe59f6" path="537">
							<activationCondition>
								<ActivationCondition condition="outputs activated or $gt#1 and $gt#2 and outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="572" ident="Check_Delta_3/_L17" name="math::Abs#3" scadeOid="!ed/4e59/552E/1160/5e3c0dfe3119"/>
								<PathElement index="573" ident="Check_Delta_3/_L18" name="Delta" scadeOid="!ed/4e5b/552E/1160/5e3c0dfe727f" rightExprIndex="1"/>
							</children>
						</PathElement>
					</rootPaths>
					<calls>
						<Call index="574" instance="1" criterionEntity="702" operator="285"/>
						<Call index="575" instance="1" criterionEntity="699" operator="324"/>
						<Call index="576" instance="2" criterionEntity="702" operator="259"/>
						<Call index="577" instance="3" criterionEntity="702" operator="233"/>
					</calls>
					<controls>
						<IfBlock index="578" name="IfBlock1">
							<paths>
								<Path index="579" name="all_fail -&gt; &lt;condition&gt;" AC="outputs activated" criterionEntity="691"/>
							</paths>
							<rootPaths>
								<PathElement index="580" ident="Check_Delta_3/IfBlock1" name="&lt;condition&gt;" scadeOid="!ed/a41a/47C/164C/5e3d84323951">
									<activationCondition>
										<ActivationCondition condition="outputs activated"/>
									</activationCondition>
									<children>
										<PathElement index="581" ident="MTC_cond" name="all_fail" scadeOid="!ed/a41a/47C/164C/5e3d84323951" path="579"/>
									</children>
								</PathElement>
							</rootPaths>
							<children>
								<IfBranch index="582" name="then" criterionEntity="692">
									<rootPaths>
										<PathElement index="583" ident="Check_Delta_3/IfBlock1:then:Output1" name="Output1" scadeOid="!ed/4e82/552E/1160/5e3c0e515c47">
											<activationCondition>
												<ActivationCondition condition="outputs activated"/>
											</activationCondition>
											<children>
												<PathElement index="584" ident="Check_Delta_3/IfBlock1:then:_L6" name="math::Mean3#4" scadeOid="!ed/4ea9/552E/1160/5e3c0e7f564"/>
											</children>
										</PathElement>
										<PathElement index="585" ident="Check_Delta_3/IfBlock1:then:_L6" name="math::Mean3#4" scadeOid="!ed/4ea9/552E/1160/5e3c0e7f564">
											<children>
												<PathElement index="586" ident="Check_Delta_3/IfBlock1:then:_L1" name="Input1" scadeOid="!ed/4e87/552E/1160/5e3c0e5f169b">
													<activationCondition>
														<ActivationCondition condition="outputs activated"/>
													</activationCondition>
												</PathElement>
												<PathElement index="587" ident="Check_Delta_3/IfBlock1:then:_L2" name="Input2" scadeOid="!ed/4e8d/552E/1160/5e3c0e615579" rightExprIndex="1">
													<activationCondition>
														<ActivationCondition condition="outputs activated"/>
													</activationCondition>
												</PathElement>
												<PathElement index="588" ident="Check_Delta_3/IfBlock1:then:_L3" name="Input3" scadeOid="!ed/4e93/552E/1160/5e3c0e633d8d" rightExprIndex="2">
													<activationCondition>
														<ActivationCondition condition="outputs activated"/>
													</activationCondition>
												</PathElement>
											</children>
										</PathElement>
									</rootPaths>
									<calls>
										<Call index="589" instance="4" criterionEntity="699" operator="315"/>
									</calls>
								</IfBranch>
								<IfBranch index="590" name="else" criterionEntity="692">
									<paths>
										<Path index="591" name="fail1 -&gt; &lt;condition&gt;" AC="fail2 and  not fail3 and outputs activated" criterionEntity="693"/>
										<Path index="592" name="fail2 -&gt; &lt;condition&gt;" AC="fail1 and  not fail3 and outputs activated" criterionEntity="693"/>
										<Path index="593" name="fail3 -&gt; &lt;condition&gt;" AC="fail1 and fail2 and outputs activated" criterionEntity="693"/>
									</paths>
									<rootPaths>
										<PathElement index="594" ident="Check_Delta_3/IfBlock1:else" name="&lt;condition&gt;" scadeOid="!ed/a43d/47C/164C/5e3d84323603">
											<activationCondition>
												<ActivationCondition condition="outputs activated"/>
											</activationCondition>
											<children>
												<PathElement index="595" ident="MTC_cond" name="$and#6" scadeOid="!ed/a43d/47C/164C/5e3d84323603">
													<children>
														<PathElement index="596" ident="MTC_cond" name="fail1" scadeOid="!ed/a43d/47C/164C/5e3d84323603" path="591">
															<activationCondition>
																<ActivationCondition condition="fail2 and  not fail3"/>
															</activationCondition>
														</PathElement>
														<PathElement index="597" ident="MTC_cond" name="fail2" scadeOid="!ed/a43d/47C/164C/5e3d84323603" rightExprIndex="1" path="592">
															<activationCondition>
																<ActivationCondition condition="fail1 and  not fail3"/>
															</activationCondition>
														</PathElement>
														<PathElement index="598" ident="MTC_cond" name="$not#8" scadeOid="!ed/a43d/47C/164C/5e3d84323603" rightExprIndex="2">
															<activationCondition>
																<ActivationCondition condition="fail1 and fail2"/>
															</activationCondition>
															<children>
																<PathElement index="599" ident="MTC_cond" name="fail3" scadeOid="!ed/a43d/47C/164C/5e3d84323603" path="593"/>
															</children>
														</PathElement>
													</children>
												</PathElement>
											</children>
										</PathElement>
									</rootPaths>
									<children>
										<IfBranch index="600" name="then" criterionEntity="692">
											<rootPaths>
												<PathElement index="601" ident="Check_Delta_3/IfBlock1:else:then:Output1" name="Output1" scadeOid="!ed/4fe3/552E/1160/5e3c10d9342e">
													<activationCondition>
														<ActivationCondition condition="outputs activated"/>
													</activationCondition>
													<children>
														<PathElement index="602" ident="Check_Delta_3/IfBlock1:else:then:_L1" name="Input3" scadeOid="!ed/4fdd/552E/1160/5e3c109277ac"/>
													</children>
												</PathElement>
											</rootPaths>
										</IfBranch>
										<IfBranch index="603" name="else" criterionEntity="692">
											<paths>
												<Path index="604" name="fail1 -&gt; &lt;condition&gt;" AC=" not fail2 and fail3 and outputs activated" criterionEntity="694"/>
												<Path index="605" name="fail2 -&gt; &lt;condition&gt;" AC="fail1 and fail3 and outputs activated" criterionEntity="694"/>
												<Path index="606" name="fail3 -&gt; &lt;condition&gt;" AC="fail1 and  not fail2 and outputs activated" criterionEntity="694"/>
											</paths>
											<rootPaths>
												<PathElement index="607" ident="Check_Delta_3/IfBlock1:else:else" name="&lt;condition&gt;" scadeOid="!ed/a47b/47C/164C/5e3d843274e3">
													<activationCondition>
														<ActivationCondition condition="outputs activated"/>
													</activationCondition>
													<children>
														<PathElement index="608" ident="MTC_cond" name="$and#7" scadeOid="!ed/a47b/47C/164C/5e3d843274e3">
															<children>
																<PathElement index="609" ident="MTC_cond" name="fail1" scadeOid="!ed/a47b/47C/164C/5e3d843274e3" path="604">
																	<activationCondition>
																		<ActivationCondition condition=" not fail2 and fail3"/>
																	</activationCondition>
																</PathElement>
																<PathElement index="610" ident="MTC_cond" name="$not#9" scadeOid="!ed/a47b/47C/164C/5e3d843274e3" rightExprIndex="1">
																	<activationCondition>
																		<ActivationCondition condition="fail1 and fail3"/>
																	</activationCondition>
																	<children>
																		<PathElement index="611" ident="MTC_cond" name="fail2" scadeOid="!ed/a47b/47C/164C/5e3d843274e3" path="605"/>
																	</children>
																</PathElement>
																<PathElement index="612" ident="MTC_cond" name="fail3" scadeOid="!ed/a47b/47C/164C/5e3d843274e3" rightExprIndex="2" path="606">
																	<activationCondition>
																		<ActivationCondition condition="fail1 and  not fail2"/>
																	</activationCondition>
																</PathElement>
															</children>
														</PathElement>
													</children>
												</PathElement>
											</rootPaths>
											<children>
												<IfBranch index="613" name="then" criterionEntity="692">
													<rootPaths>
														<PathElement index="614" ident="Check_Delta_3/IfBlock1:else:else:then:Output1" name="Output1" scadeOid="!ed/4fee/552E/1160/5e3c10e923cf">
															<activationCondition>
																<ActivationCondition condition="outputs activated"/>
															</activationCondition>
															<children>
																<PathElement index="615" ident="Check_Delta_3/IfBlock1:else:else:then:_L2" name="Input2" scadeOid="!ed/4ff3/552E/1160/5e3c10fc289b"/>
															</children>
														</PathElement>
													</rootPaths>
												</IfBranch>
												<IfBranch index="616" name="else" criterionEntity="692">
													<paths>
														<Path index="617" name="fail1 -&gt; &lt;condition&gt;" AC="fail2 and fail3 and outputs activated" criterionEntity="695"/>
														<Path index="618" name="fail2 -&gt; &lt;condition&gt;" AC=" not fail1 and fail3 and outputs activated" criterionEntity="695"/>
														<Path index="619" name="fail3 -&gt; &lt;condition&gt;" AC=" not fail1 and fail2 and outputs activated" criterionEntity="695"/>
													</paths>
													<rootPaths>
														<PathElement index="620" ident="Check_Delta_3/IfBlock1:else:else:else" name="&lt;condition&gt;" scadeOid="!ed/a4b6/47C/164C/5e3d84324edc">
															<activationCondition>
																<ActivationCondition condition="outputs activated"/>
															</activationCondition>
															<children>
																<PathElement index="621" ident="MTC_cond" name="$and#8" scadeOid="!ed/a4b6/47C/164C/5e3d84324edc">
																	<children>
																		<PathElement index="622" ident="MTC_cond" name="$not#10" scadeOid="!ed/a4b6/47C/164C/5e3d84324edc">
																			<activationCondition>
																				<ActivationCondition condition="fail2 and fail3"/>
																			</activationCondition>
																			<children>
																				<PathElement index="623" ident="MTC_cond" name="fail1" scadeOid="!ed/a4b6/47C/164C/5e3d84324edc" path="617"/>
																			</children>
																		</PathElement>
																		<PathElement index="624" ident="MTC_cond" name="fail2" scadeOid="!ed/a4b6/47C/164C/5e3d84324edc" rightExprIndex="1" path="618">
																			<activationCondition>
																				<ActivationCondition condition=" not fail1 and fail3"/>
																			</activationCondition>
																		</PathElement>
																		<PathElement index="625" ident="MTC_cond" name="fail3" scadeOid="!ed/a4b6/47C/164C/5e3d84324edc" rightExprIndex="2" path="619">
																			<activationCondition>
																				<ActivationCondition condition=" not fail1 and fail2"/>
																			</activationCondition>
																		</PathElement>
																	</children>
																</PathElement>
															</children>
														</PathElement>
													</rootPaths>
													<children>
														<IfBranch index="626" name="then" criterionEntity="692">
															<rootPaths>
																<PathElement index="627" ident="Check_Delta_3/IfBlock1:else:else:else:then:Output1" name="Output1" scadeOid="!ed/4fff/552E/1160/5e3c11084d98">
																	<activationCondition>
																		<ActivationCondition condition="outputs activated"/>
																	</activationCondition>
																	<children>
																		<PathElement index="628" ident="Check_Delta_3/IfBlock1:else:else:else:then:_L1" name="Input1" scadeOid="!ed/4ff9/552E/1160/5e3c1105294"/>
																	</children>
																</PathElement>
															</rootPaths>
														</IfBranch>
														<IfBranch index="629" name="else" criterionEntity="692">
															<paths>
																<Path index="630" name="fail1 -&gt; &lt;condition&gt;" AC=" not fail2 and  not fail3 and outputs activated" criterionEntity="696"/>
																<Path index="631" name="fail2 -&gt; &lt;condition&gt;" AC="fail1 and  not fail3 and outputs activated" criterionEntity="696"/>
																<Path index="632" name="fail3 -&gt; &lt;condition&gt;" AC="fail1 and  not fail2 and outputs activated" criterionEntity="696"/>
															</paths>
															<rootPaths>
																<PathElement index="633" ident="Check_Delta_3/IfBlock1:else:else:else:else" name="&lt;condition&gt;" scadeOid="!ed/a4f1/47C/164C/5e3d8432785">
																	<activationCondition>
																		<ActivationCondition condition="outputs activated"/>
																	</activationCondition>
																	<children>
																		<PathElement index="634" ident="MTC_cond" name="$and#9" scadeOid="!ed/a4f1/47C/164C/5e3d8432785">
																			<children>
																				<PathElement index="635" ident="MTC_cond" name="fail1" scadeOid="!ed/a4f1/47C/164C/5e3d8432785" path="630">
																					<activationCondition>
																						<ActivationCondition condition=" not fail2 and  not fail3"/>
																					</activationCondition>
																				</PathElement>
																				<PathElement index="636" ident="MTC_cond" name="$not#11" scadeOid="!ed/a4f1/47C/164C/5e3d8432785" rightExprIndex="1">
																					<activationCondition>
																						<ActivationCondition condition="fail1 and  not fail3"/>
																					</activationCondition>
																					<children>
																						<PathElement index="637" ident="MTC_cond" name="fail2" scadeOid="!ed/a4f1/47C/164C/5e3d8432785" path="631"/>
																					</children>
																				</PathElement>
																				<PathElement index="638" ident="MTC_cond" name="$not#12" scadeOid="!ed/a4f1/47C/164C/5e3d8432785" rightExprIndex="2">
																					<activationCondition>
																						<ActivationCondition condition="fail1 and  not fail2"/>
																					</activationCondition>
																					<children>
																						<PathElement index="639" ident="MTC_cond" name="fail3" scadeOid="!ed/a4f1/47C/164C/5e3d8432785" path="632"/>
																					</children>
																				</PathElement>
																			</children>
																		</PathElement>
																	</children>
																</PathElement>
															</rootPaths>
															<children>
																<IfBranch index="640" name="then" criterionEntity="692">
																	<rootPaths>
																		<PathElement index="641" ident="Check_Delta_3/IfBlock1:else:else:else:else:then:Output1" name="Output1" scadeOid="!ed/502e/552E/1160/5e3c11403d32">
																			<activationCondition>
																				<ActivationCondition condition="outputs activated"/>
																			</activationCondition>
																			<children>
																				<PathElement index="642" ident="Check_Delta_3/IfBlock1:else:else:else:else:then:_L3" name="math::Mean#1" scadeOid="!ed/501c/552E/1160/5e3c112a5b2b"/>
																			</children>
																		</PathElement>
																		<PathElement index="643" ident="Check_Delta_3/IfBlock1:else:else:else:else:then:_L3" name="math::Mean#1" scadeOid="!ed/501c/552E/1160/5e3c112a5b2b">
																			<children>
																				<PathElement index="644" ident="Check_Delta_3/IfBlock1:else:else:else:else:then:_L1" name="Input2" scadeOid="!ed/5004/552E/1160/5e3c110e13bf">
																					<activationCondition>
																						<ActivationCondition condition="outputs activated"/>
																					</activationCondition>
																				</PathElement>
																				<PathElement index="645" ident="Check_Delta_3/IfBlock1:else:else:else:else:then:_L2" name="Input3" scadeOid="!ed/5010/552E/1160/5e3c111e1c66" rightExprIndex="1">
																					<activationCondition>
																						<ActivationCondition condition="outputs activated"/>
																					</activationCondition>
																				</PathElement>
																			</children>
																		</PathElement>
																	</rootPaths>
																	<calls>
																		<Call index="646" instance="1" criterionEntity="700" operator="368"/>
																	</calls>
																</IfBranch>
																<IfBranch index="647" name="else" criterionEntity="692">
																	<paths>
																		<Path index="648" name="fail1 -&gt; &lt;condition&gt;" AC=" not fail2 and fail3 and outputs activated" criterionEntity="697"/>
																		<Path index="649" name="fail2 -&gt; &lt;condition&gt;" AC=" not fail1 and fail3 and outputs activated" criterionEntity="697"/>
																		<Path index="650" name="fail3 -&gt; &lt;condition&gt;" AC=" not fail1 and  not fail2 and outputs activated" criterionEntity="697"/>
																	</paths>
																	<rootPaths>
																		<PathElement index="651" ident="Check_Delta_3/IfBlock1:else:else:else:else:else" name="&lt;condition&gt;" scadeOid="!ed/a530/47C/164C/5e3d843260fd">
																			<activationCondition>
																				<ActivationCondition condition="outputs activated"/>
																			</activationCondition>
																			<children>
																				<PathElement index="652" ident="MTC_cond" name="$and#10" scadeOid="!ed/a530/47C/164C/5e3d843260fd">
																					<children>
																						<PathElement index="653" ident="MTC_cond" name="$not#13" scadeOid="!ed/a530/47C/164C/5e3d843260fd">
																							<activationCondition>
																								<ActivationCondition condition=" not fail2 and fail3"/>
																							</activationCondition>
																							<children>
																								<PathElement index="654" ident="MTC_cond" name="fail1" scadeOid="!ed/a530/47C/164C/5e3d843260fd" path="648"/>
																							</children>
																						</PathElement>
																						<PathElement index="655" ident="MTC_cond" name="$not#14" scadeOid="!ed/a530/47C/164C/5e3d843260fd" rightExprIndex="1">
																							<activationCondition>
																								<ActivationCondition condition=" not fail1 and fail3"/>
																							</activationCondition>
																							<children>
																								<PathElement index="656" ident="MTC_cond" name="fail2" scadeOid="!ed/a530/47C/164C/5e3d843260fd" path="649"/>
																							</children>
																						</PathElement>
																						<PathElement index="657" ident="MTC_cond" name="fail3" scadeOid="!ed/a530/47C/164C/5e3d843260fd" rightExprIndex="2" path="650">
																							<activationCondition>
																								<ActivationCondition condition=" not fail1 and  not fail2"/>
																							</activationCondition>
																						</PathElement>
																					</children>
																				</PathElement>
																			</children>
																		</PathElement>
																	</rootPaths>
																	<children>
																		<IfBranch index="658" name="then" criterionEntity="692">
																			<rootPaths>
																				<PathElement index="659" ident="Check_Delta_3/IfBlock1:else:else:else:else:else:then:Output1" name="Output1" scadeOid="!ed/503f/552E/1160/5e3c11533e2a">
																					<activationCondition>
																						<ActivationCondition condition="outputs activated"/>
																					</activationCondition>
																					<children>
																						<PathElement index="660" ident="Check_Delta_3/IfBlock1:else:else:else:else:else:then:_L1" name="math::Mean#2" scadeOid="!ed/5022/552E/1160/5e3c1139f2f"/>
																					</children>
																				</PathElement>
																				<PathElement index="661" ident="Check_Delta_3/IfBlock1:else:else:else:else:else:then:_L1" name="math::Mean#2" scadeOid="!ed/5022/552E/1160/5e3c1139f2f">
																					<children>
																						<PathElement index="662" ident="Check_Delta_3/IfBlock1:else:else:else:else:else:then:_L2" name="Input1" scadeOid="!ed/5033/552E/1160/5e3c1148261f">
																							<activationCondition>
																								<ActivationCondition condition="outputs activated"/>
																							</activationCondition>
																						</PathElement>
																						<PathElement index="663" ident="Check_Delta_3/IfBlock1:else:else:else:else:else:then:_L3" name="Input2" scadeOid="!ed/5039/552E/1160/5e3c114b4e0d" rightExprIndex="1">
																							<activationCondition>
																								<ActivationCondition condition="outputs activated"/>
																							</activationCondition>
																						</PathElement>
																					</children>
																				</PathElement>
																			</rootPaths>
																			<calls>
																				<Call index="664" instance="2" criterionEntity="700" operator="360"/>
																			</calls>
																		</IfBranch>
																		<IfBranch index="665" name="else" criterionEntity="692">
																			<paths>
																				<Path index="666" name="fail1 -&gt; &lt;condition&gt;" AC="fail2 and  not fail3 and outputs activated" criterionEntity="698"/>
																				<Path index="667" name="fail2 -&gt; &lt;condition&gt;" AC=" not fail1 and  not fail3 and outputs activated" criterionEntity="698"/>
																				<Path index="668" name="fail3 -&gt; &lt;condition&gt;" AC=" not fail1 and fail2 and outputs activated" criterionEntity="698"/>
																			</paths>
																			<rootPaths>
																				<PathElement index="669" ident="Check_Delta_3/IfBlock1:else:else:else:else:else:else" name="&lt;condition&gt;" scadeOid="!ed/a56f/47C/164C/5e3d843242b9">
																					<activationCondition>
																						<ActivationCondition condition="outputs activated"/>
																					</activationCondition>
																					<children>
																						<PathElement index="670" ident="MTC_cond" name="$and#11" scadeOid="!ed/a56f/47C/164C/5e3d843242b9">
																							<children>
																								<PathElement index="671" ident="MTC_cond" name="$not#15" scadeOid="!ed/a56f/47C/164C/5e3d843242b9">
																									<activationCondition>
																										<ActivationCondition condition="fail2 and  not fail3"/>
																									</activationCondition>
																									<children>
																										<PathElement index="672" ident="MTC_cond" name="fail1" scadeOid="!ed/a56f/47C/164C/5e3d843242b9" path="666"/>
																									</children>
																								</PathElement>
																								<PathElement index="673" ident="MTC_cond" name="fail2" scadeOid="!ed/a56f/47C/164C/5e3d843242b9" rightExprIndex="1" path="667">
																									<activationCondition>
																										<ActivationCondition condition=" not fail1 and  not fail3"/>
																									</activationCondition>
																								</PathElement>
																								<PathElement index="674" ident="MTC_cond" name="$not#16" scadeOid="!ed/a56f/47C/164C/5e3d843242b9" rightExprIndex="2">
																									<activationCondition>
																										<ActivationCondition condition=" not fail1 and fail2"/>
																									</activationCondition>
																									<children>
																										<PathElement index="675" ident="MTC_cond" name="fail3" scadeOid="!ed/a56f/47C/164C/5e3d843242b9" path="668"/>
																									</children>
																								</PathElement>
																							</children>
																						</PathElement>
																					</children>
																				</PathElement>
																			</rootPaths>
																			<children>
																				<IfBranch index="676" name="then" criterionEntity="692">
																					<rootPaths>
																						<PathElement index="677" ident="Check_Delta_3/IfBlock1:else:else:else:else:else:else:then:Output1" name="Output1" scadeOid="!ed/5057/552E/1160/5e3c11684b6b">
																							<activationCondition>
																								<ActivationCondition condition="outputs activated"/>
																							</activationCondition>
																							<children>
																								<PathElement index="678" ident="Check_Delta_3/IfBlock1:else:else:else:else:else:else:then:_L1" name="math::Mean#3" scadeOid="!ed/5028/552E/1160/5e3c113b6f38"/>
																							</children>
																						</PathElement>
																						<PathElement index="679" ident="Check_Delta_3/IfBlock1:else:else:else:else:else:else:then:_L1" name="math::Mean#3" scadeOid="!ed/5028/552E/1160/5e3c113b6f38">
																							<children>
																								<PathElement index="680" ident="Check_Delta_3/IfBlock1:else:else:else:else:else:else:then:_L3" name="Input3" scadeOid="!ed/5050/552E/1160/5e3c11624ea6">
																									<activationCondition>
																										<ActivationCondition condition="outputs activated"/>
																									</activationCondition>
																								</PathElement>
																								<PathElement index="681" ident="Check_Delta_3/IfBlock1:else:else:else:else:else:else:then:_L2" name="Input1" scadeOid="!ed/504a/552E/1160/5e3c115d3be4" rightExprIndex="1">
																									<activationCondition>
																										<ActivationCondition condition="outputs activated"/>
																									</activationCondition>
																								</PathElement>
																							</children>
																						</PathElement>
																					</rootPaths>
																					<calls>
																						<Call index="682" instance="3" criterionEntity="700" operator="344"/>
																					</calls>
																				</IfBranch>
																				<IfBranch index="683" name="else" criterionEntity="692">
																					<rootPaths>
																						<PathElement index="684" ident="Check_Delta_3/IfBlock1:else:else:else:else:else:else:else:Output1" name="Output1" scadeOid="!ed/4fd8/552E/1160/5e3c108511c2">
																							<activationCondition>
																								<ActivationCondition condition="outputs activated"/>
																							</activationCondition>
																							<children>
																								<PathElement index="685" ident="Check_Delta_3/IfBlock1:else:else:else:else:else:else:else:_L1" name="math::Mean3#6" scadeOid="!ed/4fc4/552E/1160/5e3c10792fa3"/>
																							</children>
																						</PathElement>
																						<PathElement index="686" ident="Check_Delta_3/IfBlock1:else:else:else:else:else:else:else:_L1" name="math::Mean3#6" scadeOid="!ed/4fc4/552E/1160/5e3c10792fa3">
																							<children>
																								<PathElement index="687" ident="Check_Delta_3/IfBlock1:else:else:else:else:else:else:else:_L2" name="Input1" scadeOid="!ed/4fc6/552E/1160/5e3c107e7978">
																									<activationCondition>
																										<ActivationCondition condition="outputs activated"/>
																									</activationCondition>
																								</PathElement>
																								<PathElement index="688" ident="Check_Delta_3/IfBlock1:else:else:else:else:else:else:else:_L3" name="Input2" scadeOid="!ed/4fcc/552E/1160/5e3c1080541f" rightExprIndex="1">
																									<activationCondition>
																										<ActivationCondition condition="outputs activated"/>
																									</activationCondition>
																								</PathElement>
																								<PathElement index="689" ident="Check_Delta_3/IfBlock1:else:else:else:else:else:else:else:_L4" name="Input3" scadeOid="!ed/4fd2/552E/1160/5e3c10821d5e" rightExprIndex="2">
																									<activationCondition>
																										<ActivationCondition condition="outputs activated"/>
																									</activationCondition>
																								</PathElement>
																							</children>
																						</PathElement>
																					</rootPaths>
																					<calls>
																						<Call index="690" instance="6" criterionEntity="699" operator="306"/>
																					</calls>
																				</IfBranch>
																			</children>
																		</IfBranch>
																	</children>
																</IfBranch>
															</children>
														</IfBranch>
													</children>
												</IfBranch>
											</children>
										</IfBranch>
									</children>
								</IfBranch>
							</children>
						</IfBlock>
					</controls>
				</Operator>
				<Operator index="691" name="MTCEx::MTC_Observers::Check_Delta_3_PATHS1_MTC_OBS" kind="1"/>
				<Operator index="692" name="MTCEx::MTC_Observers::CONTROL_MTC_OBS" kind="1"/>
				<Operator index="693" name="MTCEx::MTC_Observers::Check_Delta_3_PATHS2_MTC_OBS" kind="1"/>
				<Operator index="694" name="MTCEx::MTC_Observers::Check_Delta_3_PATHS3_MTC_OBS" kind="1"/>
				<Operator index="695" name="MTCEx::MTC_Observers::Check_Delta_3_PATHS4_MTC_OBS" kind="1"/>
				<Operator index="696" name="MTCEx::MTC_Observers::Check_Delta_3_PATHS5_MTC_OBS" kind="1"/>
				<Operator index="697" name="MTCEx::MTC_Observers::Check_Delta_3_PATHS6_MTC_OBS" kind="1"/>
				<Operator index="698" name="MTCEx::MTC_Observers::Check_Delta_3_PATHS7_MTC_OBS" kind="1"/>
				<Operator index="699" name="MTCEx::MTC_Observers::math_Mean3_MTC_OBS" kind="1"/>
				<Operator index="700" name="MTCEx::MTC_Observers::math_Mean_MTC_OBS" kind="1"/>
				<Operator index="701" name="MTCEx::MTC_Observers::Check_Delta_3_PATHS8_MTC_OBS" kind="1"/>
				<Operator index="702" name="MTCEx::MTC_Observers::math_Abs_MTC_OBS" kind="1"/>
				<Operator index="703" name="MTCEx::MTC_Observers::Check_Delta_3_PATHS9_MTC_OBS" kind="1"/>
				<Operator index="704" name="MTCEx::MTC_Observers::Check_Delta_3_PATHS10_MTC_OBS" kind="1"/>
				<Operator index="705" name="MTCEx::MTC_Observers::Check_Delta_3_PATHS11_MTC_OBS" kind="1"/>
				<Operator index="706" name="MTCEx::MTC_Observers::Check_Delta_3_PATHS12_MTC_OBS" kind="1"/>
				<Operator index="707" name="MTCEx::MTC_Observers::Check_Delta_3_PATHS13_MTC_OBS" kind="1"/>
				<Operator index="708" name="MTCEx::MTC_Observers::Check_Delta_3_PATHS14_MTC_OBS" kind="1"/>
				<Operator index="709" name="digital::FallingEdgeNoRetrigger" excluded="true"/>
				<Operator index="710" name="digital::FallingEdgeRetrigger" excluded="true"/>
				<Operator index="711" name="digital::RisingEdgeRetrigger" excluded="true"/>
				<Operator index="712" name="digital::RisingEdgeNoRetrigger" excluded="true"/>
				<Operator index="713" name="digital::TriggerRise" excluded="true"/>
				<Operator index="714" name="digital::TriggerFall" excluded="true"/>
				<Operator index="715" name="digital::TriggerEither" excluded="true"/>
				<Operator index="716" name="vect::MatProd" excluded="true"/>
				<Operator index="717" name="vect::MatAdd" excluded="true"/>
				<Operator index="718" name="vect::Inv4x4" excluded="true"/>
				<Operator index="719" name="vect::Inv3x3" excluded="true"/>
				<Operator index="720" name="vect::Inv2x2" excluded="true"/>
				<Operator index="721" name="vect::MatSub" excluded="true"/>
				<Operator index="722" name="vect::BuildArray" excluded="true"/>
				<Operator index="723" name="lut::Lut1DCeil" excluded="true"/>
				<Operator index="724" name="lut::Lut1DNearest" excluded="true"/>
				<Operator index="725" name="lut::Lut2DFloor" excluded="true"/>
				<Operator index="726" name="lut::Lut2DCeil" excluded="true"/>
				<Operator index="727" name="lut::Lut1DNoSat" excluded="true"/>
				<Operator index="728" name="lut::Lut2D" excluded="true"/>
				<Operator index="729" name="lut::Lut1D" excluded="true"/>
				<Operator index="730" name="lut::Lut3D" excluded="true"/>
				<Operator index="731" name="lut::PreLut" excluded="true"/>
				<Operator index="732" name="verif::AlwaysAfterFirstCond" excluded="true"/>
				<Operator index="733" name="Calculated_value">
					<paths>
						<Path index="734" name="a" AC="outputs activated" criterionEntity="874"/>
						<Path index="735" name="$neq#1 -&gt; a" AC="outputs activated" criterionEntity="874"/>
						<Path index="736" name="b" AC="outputs activated" criterionEntity="875"/>
						<Path index="737" name="$neq#2 -&gt; b" AC="outputs activated" criterionEntity="875"/>
						<Path index="738" name="c" AC="outputs activated" criterionEntity="876"/>
						<Path index="739" name="$neq#3 -&gt; c" AC="outputs activated" criterionEntity="876"/>
					</paths>
					<rootPaths>
						<PathElement index="740" ident="Calculated_value/a" name="a" scadeOid="!ed/4c77/552E/1160/5e3c07fd1702" path="734">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="741" ident="Calculated_value/_L16" name="$neq#1" scadeOid="!ed/4c94/552E/1160/5e3c085c60a2" path="735">
									<children>
										<PathElement index="742" ident="Calculated_value/_L1" name="value1" scadeOid="!ed/4b4b/552E/1160/5e3c02ca326a"/>
										<PathElement index="743" ident="Calculated_value/_L7" name="Beyond_Interval_value" scadeOid="!ed/4ba7/552E/1160/5e3c031b45aa" rightExprIndex="1"/>
									</children>
								</PathElement>
							</children>
						</PathElement>
						<PathElement index="744" ident="Calculated_value/b" name="b" scadeOid="!ed/4c81/552E/1160/5e3c082c6eee" path="736">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="745" ident="Calculated_value/_L17" name="$neq#2" scadeOid="!ed/4c9e/552E/1160/5e3c08624a78" path="737">
									<children>
										<PathElement index="746" ident="Calculated_value/_L2" name="value2" scadeOid="!ed/4b58/552E/1160/5e3c02cd388f"/>
										<PathElement index="747" ident="Calculated_value/_L8" name="Beyond_Interval_value" scadeOid="!ed/4bad/552E/1160/5e3c03346c8e" rightExprIndex="1"/>
									</children>
								</PathElement>
							</children>
						</PathElement>
						<PathElement index="748" ident="Calculated_value/c" name="c" scadeOid="!ed/4c8b/552E/1160/5e3c084eb6f" path="738">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="749" ident="Calculated_value/_L18" name="$neq#3" scadeOid="!ed/4ca8/552E/1160/5e3c08687401" path="739">
									<children>
										<PathElement index="750" ident="Calculated_value/_L3" name="value3" scadeOid="!ed/4b65/552E/1160/5e3c02cf5bc4"/>
										<PathElement index="751" ident="Calculated_value/_L9" name="Beyond_Interval_value" scadeOid="!ed/4bb3/552E/1160/5e3c033d1b3b" rightExprIndex="1"/>
									</children>
								</PathElement>
							</children>
						</PathElement>
					</rootPaths>
					<controls>
						<IfBlock index="752" name="IfBlock1">
							<paths>
								<Path index="753" name="a -&gt; &lt;condition&gt;" AC="b and c and outputs activated" criterionEntity="866"/>
								<Path index="754" name="b -&gt; &lt;condition&gt;" AC="a and c and outputs activated" criterionEntity="866"/>
								<Path index="755" name="c -&gt; &lt;condition&gt;" AC="a and b and outputs activated" criterionEntity="866"/>
							</paths>
							<rootPaths>
								<PathElement index="756" ident="Calculated_value/IfBlock1" name="&lt;condition&gt;" scadeOid="!ed/a700/47C/164C/5e3d84327693">
									<activationCondition>
										<ActivationCondition condition="outputs activated"/>
									</activationCondition>
									<children>
										<PathElement index="757" ident="MTC_cond" name="$and#2" scadeOid="!ed/a700/47C/164C/5e3d84327693">
											<children>
												<PathElement index="758" ident="MTC_cond" name="a" scadeOid="!ed/a700/47C/164C/5e3d84327693" path="753">
													<activationCondition>
														<ActivationCondition condition="b and c"/>
													</activationCondition>
												</PathElement>
												<PathElement index="759" ident="MTC_cond" name="b" scadeOid="!ed/a700/47C/164C/5e3d84327693" rightExprIndex="1" path="754">
													<activationCondition>
														<ActivationCondition condition="a and c"/>
													</activationCondition>
												</PathElement>
												<PathElement index="760" ident="MTC_cond" name="c" scadeOid="!ed/a700/47C/164C/5e3d84327693" rightExprIndex="2" path="755">
													<activationCondition>
														<ActivationCondition condition="a and b"/>
													</activationCondition>
												</PathElement>
											</children>
										</PathElement>
									</children>
								</PathElement>
							</rootPaths>
							<children>
								<IfBranch index="761" name="then" criterionEntity="692">
									<rootPaths>
										<PathElement index="762" ident="Calculated_value/IfBlock1:then:Output1" name="Output1" scadeOid="!ed/5093/552E/1160/5e3c120234d4">
											<activationCondition>
												<ActivationCondition condition="outputs activated"/>
											</activationCondition>
											<children>
												<PathElement index="763" ident="Calculated_value/IfBlock1:then:_L7" name="Check_Delta_3#1" scadeOid="!ed/5064/552E/1160/5e3c11ba5035"/>
											</children>
										</PathElement>
										<PathElement index="764" ident="Calculated_value/IfBlock1:then:_L7" name="Check_Delta_3#1" scadeOid="!ed/5064/552E/1160/5e3c11ba5035">
											<activationCondition>
												<ActivationCondition condition="outputs activated"/>
											</activationCondition>
											<children>
												<PathElement index="765" ident="Calculated_value/IfBlock1:then:_L4" name="value1" scadeOid="!ed/4d3a/552E/1160/5e3c0a2e5ae6"/>
												<PathElement index="766" ident="Calculated_value/IfBlock1:then:_L5" name="value2" scadeOid="!ed/4d3c/552E/1160/5e3c0a3b6d74" rightExprIndex="1"/>
												<PathElement index="767" ident="Calculated_value/IfBlock1:then:_L6" name="value3" scadeOid="!ed/4d42/552E/1160/5e3c0a3d529e" rightExprIndex="2"/>
												<PathElement index="768" ident="Calculated_value/IfBlock1:then:_L8" name="delta" scadeOid="!ed/5088/552E/1160/5e3c11eb519d" rightExprIndex="3"/>
											</children>
										</PathElement>
									</rootPaths>
									<calls>
										<Call index="769" instance="1" criterionEntity="873" operator="524"/>
									</calls>
								</IfBranch>
								<IfBranch index="770" name="else" criterionEntity="692">
									<paths>
										<Path index="771" name="a -&gt; &lt;condition&gt;" AC="b and c and outputs activated" criterionEntity="867"/>
										<Path index="772" name="b -&gt; &lt;condition&gt;" AC=" not a and c and outputs activated" criterionEntity="867"/>
										<Path index="773" name="c -&gt; &lt;condition&gt;" AC=" not a and b and outputs activated" criterionEntity="867"/>
									</paths>
									<rootPaths>
										<PathElement index="774" ident="Calculated_value/IfBlock1:else" name="&lt;condition&gt;" scadeOid="!ed/a738/47C/164C/5e3d84322571">
											<activationCondition>
												<ActivationCondition condition="outputs activated"/>
											</activationCondition>
											<children>
												<PathElement index="775" ident="MTC_cond" name="$and#3" scadeOid="!ed/a738/47C/164C/5e3d84322571">
													<children>
														<PathElement index="776" ident="MTC_cond" name="$not#1" scadeOid="!ed/a738/47C/164C/5e3d84322571">
															<activationCondition>
																<ActivationCondition condition="b and c"/>
															</activationCondition>
															<children>
																<PathElement index="777" ident="MTC_cond" name="a" scadeOid="!ed/a738/47C/164C/5e3d84322571" path="771"/>
															</children>
														</PathElement>
														<PathElement index="778" ident="MTC_cond" name="b" scadeOid="!ed/a738/47C/164C/5e3d84322571" rightExprIndex="1" path="772">
															<activationCondition>
																<ActivationCondition condition=" not a and c"/>
															</activationCondition>
														</PathElement>
														<PathElement index="779" ident="MTC_cond" name="c" scadeOid="!ed/a738/47C/164C/5e3d84322571" rightExprIndex="2" path="773">
															<activationCondition>
																<ActivationCondition condition=" not a and b"/>
															</activationCondition>
														</PathElement>
													</children>
												</PathElement>
											</children>
										</PathElement>
									</rootPaths>
									<children>
										<IfBranch index="780" name="then" criterionEntity="692">
											<rootPaths>
												<PathElement index="781" ident="Calculated_value/IfBlock1:else:then:Output1" name="Output1" scadeOid="!ed/50ac/552E/1160/5e3c125f6970">
													<activationCondition>
														<ActivationCondition condition="outputs activated"/>
													</activationCondition>
													<children>
														<PathElement index="782" ident="Calculated_value/IfBlock1:else:then:_L1" name="math::Mean#1" scadeOid="!ed/509a/552E/1160/5e3c124a437"/>
													</children>
												</PathElement>
												<PathElement index="783" ident="Calculated_value/IfBlock1:else:then:_L1" name="math::Mean#1" scadeOid="!ed/509a/552E/1160/5e3c124a437">
													<children>
														<PathElement index="784" ident="Calculated_value/IfBlock1:else:then:_L2" name="value2" scadeOid="!ed/50a0/552E/1160/5e3c12566cb6">
															<activationCondition>
																<ActivationCondition condition="outputs activated"/>
															</activationCondition>
														</PathElement>
														<PathElement index="785" ident="Calculated_value/IfBlock1:else:then:_L3" name="value3" scadeOid="!ed/50a6/552E/1160/5e3c12586d29" rightExprIndex="1">
															<activationCondition>
																<ActivationCondition condition="outputs activated"/>
															</activationCondition>
														</PathElement>
													</children>
												</PathElement>
											</rootPaths>
											<calls>
												<Call index="786" instance="1" criterionEntity="700" operator="376"/>
											</calls>
										</IfBranch>
										<IfBranch index="787" name="else" criterionEntity="692">
											<paths>
												<Path index="788" name="b -&gt; &lt;condition&gt;" AC="a and c and outputs activated" criterionEntity="868"/>
												<Path index="789" name="a -&gt; &lt;condition&gt;" AC=" not b and c and outputs activated" criterionEntity="868"/>
												<Path index="790" name="c -&gt; &lt;condition&gt;" AC=" not b and a and outputs activated" criterionEntity="868"/>
											</paths>
											<rootPaths>
												<PathElement index="791" ident="Calculated_value/IfBlock1:else:else" name="&lt;condition&gt;" scadeOid="!ed/a773/47C/164C/5e3d843270cd">
													<activationCondition>
														<ActivationCondition condition="outputs activated"/>
													</activationCondition>
													<children>
														<PathElement index="792" ident="MTC_cond" name="$and#4" scadeOid="!ed/a773/47C/164C/5e3d843270cd">
															<children>
																<PathElement index="793" ident="MTC_cond" name="$not#2" scadeOid="!ed/a773/47C/164C/5e3d843270cd">
																	<activationCondition>
																		<ActivationCondition condition="a and c"/>
																	</activationCondition>
																	<children>
																		<PathElement index="794" ident="MTC_cond" name="b" scadeOid="!ed/a773/47C/164C/5e3d843270cd" path="788"/>
																	</children>
																</PathElement>
																<PathElement index="795" ident="MTC_cond" name="a" scadeOid="!ed/a773/47C/164C/5e3d843270cd" rightExprIndex="1" path="789">
																	<activationCondition>
																		<ActivationCondition condition=" not b and c"/>
																	</activationCondition>
																</PathElement>
																<PathElement index="796" ident="MTC_cond" name="c" scadeOid="!ed/a773/47C/164C/5e3d843270cd" rightExprIndex="2" path="790">
																	<activationCondition>
																		<ActivationCondition condition=" not b and a"/>
																	</activationCondition>
																</PathElement>
															</children>
														</PathElement>
													</children>
												</PathElement>
											</rootPaths>
											<children>
												<IfBranch index="797" name="then" criterionEntity="692">
													<rootPaths>
														<PathElement index="798" ident="Calculated_value/IfBlock1:else:else:then:Output1" name="Output1" scadeOid="!ed/50d7/552E/1160/5e3c128ed95">
															<activationCondition>
																<ActivationCondition condition="outputs activated"/>
															</activationCondition>
															<children>
																<PathElement index="799" ident="Calculated_value/IfBlock1:else:else:then:_L1" name="math::Mean#3" scadeOid="!ed/50bd/552E/1160/5e3c126c2cac"/>
															</children>
														</PathElement>
														<PathElement index="800" ident="Calculated_value/IfBlock1:else:else:then:_L1" name="math::Mean#3" scadeOid="!ed/50bd/552E/1160/5e3c126c2cac">
															<children>
																<PathElement index="801" ident="Calculated_value/IfBlock1:else:else:then:_L4" name="value1" scadeOid="!ed/50cb/552E/1160/5e3c128517df">
																	<activationCondition>
																		<ActivationCondition condition="outputs activated"/>
																	</activationCondition>
																</PathElement>
																<PathElement index="802" ident="Calculated_value/IfBlock1:else:else:then:_L5" name="value3" scadeOid="!ed/50d1/552E/1160/5e3c12872c0e" rightExprIndex="1">
																	<activationCondition>
																		<ActivationCondition condition="outputs activated"/>
																	</activationCondition>
																</PathElement>
															</children>
														</PathElement>
													</rootPaths>
													<calls>
														<Call index="803" instance="3" criterionEntity="700" operator="352"/>
													</calls>
												</IfBranch>
												<IfBranch index="804" name="else" criterionEntity="692">
													<paths>
														<Path index="805" name="c -&gt; &lt;condition&gt;" AC="a and b and outputs activated" criterionEntity="869"/>
														<Path index="806" name="a -&gt; &lt;condition&gt;" AC=" not c and b and outputs activated" criterionEntity="869"/>
														<Path index="807" name="b -&gt; &lt;condition&gt;" AC=" not c and a and outputs activated" criterionEntity="869"/>
													</paths>
													<rootPaths>
														<PathElement index="808" ident="Calculated_value/IfBlock1:else:else:else" name="&lt;condition&gt;" scadeOid="!ed/a7ae/47C/164C/5e3d84322cc0">
															<activationCondition>
																<ActivationCondition condition="outputs activated"/>
															</activationCondition>
															<children>
																<PathElement index="809" ident="MTC_cond" name="$and#5" scadeOid="!ed/a7ae/47C/164C/5e3d84322cc0">
																	<children>
																		<PathElement index="810" ident="MTC_cond" name="$not#3" scadeOid="!ed/a7ae/47C/164C/5e3d84322cc0">
																			<activationCondition>
																				<ActivationCondition condition="a and b"/>
																			</activationCondition>
																			<children>
																				<PathElement index="811" ident="MTC_cond" name="c" scadeOid="!ed/a7ae/47C/164C/5e3d84322cc0" path="805"/>
																			</children>
																		</PathElement>
																		<PathElement index="812" ident="MTC_cond" name="a" scadeOid="!ed/a7ae/47C/164C/5e3d84322cc0" rightExprIndex="1" path="806">
																			<activationCondition>
																				<ActivationCondition condition=" not c and b"/>
																			</activationCondition>
																		</PathElement>
																		<PathElement index="813" ident="MTC_cond" name="b" scadeOid="!ed/a7ae/47C/164C/5e3d84322cc0" rightExprIndex="2" path="807">
																			<activationCondition>
																				<ActivationCondition condition=" not c and a"/>
																			</activationCondition>
																		</PathElement>
																	</children>
																</PathElement>
															</children>
														</PathElement>
													</rootPaths>
													<children>
														<IfBranch index="814" name="then" criterionEntity="692">
															<rootPaths>
																<PathElement index="815" ident="Calculated_value/IfBlock1:else:else:else:then:Output1" name="Output1" scadeOid="!ed/50fe/552E/1160/5e3c12b822dc">
																	<activationCondition>
																		<ActivationCondition condition="outputs activated"/>
																	</activationCondition>
																	<children>
																		<PathElement index="816" ident="Calculated_value/IfBlock1:else:else:else:then:_L2" name="math::Mean#5" scadeOid="!ed/50f0/552E/1160/5e3c12ae44c3"/>
																	</children>
																</PathElement>
																<PathElement index="817" ident="Calculated_value/IfBlock1:else:else:else:then:_L2" name="math::Mean#5" scadeOid="!ed/50f0/552E/1160/5e3c12ae44c3">
																	<children>
																		<PathElement index="818" ident="Calculated_value/IfBlock1:else:else:else:then:_L3" name="value1" scadeOid="!ed/50f2/552E/1160/5e3c12b04d43">
																			<activationCondition>
																				<ActivationCondition condition="outputs activated"/>
																			</activationCondition>
																		</PathElement>
																		<PathElement index="819" ident="Calculated_value/IfBlock1:else:else:else:then:_L4" name="value2" scadeOid="!ed/50f8/552E/1160/5e3c12b27dbf" rightExprIndex="1">
																			<activationCondition>
																				<ActivationCondition condition="outputs activated"/>
																			</activationCondition>
																		</PathElement>
																	</children>
																</PathElement>
															</rootPaths>
															<calls>
																<Call index="820" instance="5" criterionEntity="700" operator="336"/>
															</calls>
														</IfBranch>
														<IfBranch index="821" name="else" criterionEntity="692">
															<paths>
																<Path index="822" name="a -&gt; &lt;condition&gt;" AC=" not b and c and outputs activated" criterionEntity="870"/>
																<Path index="823" name="b -&gt; &lt;condition&gt;" AC=" not a and c and outputs activated" criterionEntity="870"/>
																<Path index="824" name="c -&gt; &lt;condition&gt;" AC=" not a and  not b and outputs activated" criterionEntity="870"/>
															</paths>
															<rootPaths>
																<PathElement index="825" ident="Calculated_value/IfBlock1:else:else:else:else" name="&lt;condition&gt;" scadeOid="!ed/a7e9/47C/164C/5e3d84321bbd">
																	<activationCondition>
																		<ActivationCondition condition="outputs activated"/>
																	</activationCondition>
																	<children>
																		<PathElement index="826" ident="MTC_cond" name="$and#6" scadeOid="!ed/a7e9/47C/164C/5e3d84321bbd">
																			<children>
																				<PathElement index="827" ident="MTC_cond" name="$not#4" scadeOid="!ed/a7e9/47C/164C/5e3d84321bbd">
																					<activationCondition>
																						<ActivationCondition condition=" not b and c"/>
																					</activationCondition>
																					<children>
																						<PathElement index="828" ident="MTC_cond" name="a" scadeOid="!ed/a7e9/47C/164C/5e3d84321bbd" path="822"/>
																					</children>
																				</PathElement>
																				<PathElement index="829" ident="MTC_cond" name="$not#5" scadeOid="!ed/a7e9/47C/164C/5e3d84321bbd" rightExprIndex="1">
																					<activationCondition>
																						<ActivationCondition condition=" not a and c"/>
																					</activationCondition>
																					<children>
																						<PathElement index="830" ident="MTC_cond" name="b" scadeOid="!ed/a7e9/47C/164C/5e3d84321bbd" path="823"/>
																					</children>
																				</PathElement>
																				<PathElement index="831" ident="MTC_cond" name="c" scadeOid="!ed/a7e9/47C/164C/5e3d84321bbd" rightExprIndex="2" path="824">
																					<activationCondition>
																						<ActivationCondition condition=" not a and  not b"/>
																					</activationCondition>
																				</PathElement>
																			</children>
																		</PathElement>
																	</children>
																</PathElement>
															</rootPaths>
															<children>
																<IfBranch index="832" name="then" criterionEntity="692">
																	<rootPaths>
																		<PathElement index="833" ident="Calculated_value/IfBlock1:else:else:else:else:then:Output1" name="Output1" scadeOid="!ed/5109/552E/1160/5e3c12c7636">
																			<activationCondition>
																				<ActivationCondition condition="outputs activated"/>
																			</activationCondition>
																			<children>
																				<PathElement index="834" ident="Calculated_value/IfBlock1:else:else:else:else:then:_L1" name="value3" scadeOid="!ed/5103/552E/1160/5e3c12c57a9c"/>
																			</children>
																		</PathElement>
																	</rootPaths>
																</IfBranch>
																<IfBranch index="835" name="else" criterionEntity="692">
																	<paths>
																		<Path index="836" name="b -&gt; &lt;condition&gt;" AC=" not c and a and outputs activated" criterionEntity="871"/>
																		<Path index="837" name="c -&gt; &lt;condition&gt;" AC=" not b and a and outputs activated" criterionEntity="871"/>
																		<Path index="838" name="a -&gt; &lt;condition&gt;" AC=" not b and  not c and outputs activated" criterionEntity="871"/>
																	</paths>
																	<rootPaths>
																		<PathElement index="839" ident="Calculated_value/IfBlock1:else:else:else:else:else" name="&lt;condition&gt;" scadeOid="!ed/a828/47C/164C/5e3d8432653c">
																			<activationCondition>
																				<ActivationCondition condition="outputs activated"/>
																			</activationCondition>
																			<children>
																				<PathElement index="840" ident="MTC_cond" name="$and#7" scadeOid="!ed/a828/47C/164C/5e3d8432653c">
																					<children>
																						<PathElement index="841" ident="MTC_cond" name="$not#6" scadeOid="!ed/a828/47C/164C/5e3d8432653c">
																							<activationCondition>
																								<ActivationCondition condition=" not c and a"/>
																							</activationCondition>
																							<children>
																								<PathElement index="842" ident="MTC_cond" name="b" scadeOid="!ed/a828/47C/164C/5e3d8432653c" path="836"/>
																							</children>
																						</PathElement>
																						<PathElement index="843" ident="MTC_cond" name="$not#7" scadeOid="!ed/a828/47C/164C/5e3d8432653c" rightExprIndex="1">
																							<activationCondition>
																								<ActivationCondition condition=" not b and a"/>
																							</activationCondition>
																							<children>
																								<PathElement index="844" ident="MTC_cond" name="c" scadeOid="!ed/a828/47C/164C/5e3d8432653c" path="837"/>
																							</children>
																						</PathElement>
																						<PathElement index="845" ident="MTC_cond" name="a" scadeOid="!ed/a828/47C/164C/5e3d8432653c" rightExprIndex="2" path="838">
																							<activationCondition>
																								<ActivationCondition condition=" not b and  not c"/>
																							</activationCondition>
																						</PathElement>
																					</children>
																				</PathElement>
																			</children>
																		</PathElement>
																	</rootPaths>
																	<children>
																		<IfBranch index="846" name="then" criterionEntity="692">
																			<rootPaths>
																				<PathElement index="847" ident="Calculated_value/IfBlock1:else:else:else:else:else:then:Output1" name="Output1" scadeOid="!ed/5114/552E/1160/5e3c12cd2b1c">
																					<activationCondition>
																						<ActivationCondition condition="outputs activated"/>
																					</activationCondition>
																					<children>
																						<PathElement index="848" ident="Calculated_value/IfBlock1:else:else:else:else:else:then:_L1" name="value1" scadeOid="!ed/510e/552E/1160/5e3c12cbed8"/>
																					</children>
																				</PathElement>
																			</rootPaths>
																		</IfBranch>
																		<IfBranch index="849" name="else" criterionEntity="692">
																			<paths>
																				<Path index="850" name="a -&gt; &lt;condition&gt;" AC=" not c and b and outputs activated" criterionEntity="872"/>
																				<Path index="851" name="c -&gt; &lt;condition&gt;" AC=" not a and b and outputs activated" criterionEntity="872"/>
																				<Path index="852" name="b -&gt; &lt;condition&gt;" AC=" not a and  not c and outputs activated" criterionEntity="872"/>
																			</paths>
																			<rootPaths>
																				<PathElement index="853" ident="Calculated_value/IfBlock1:else:else:else:else:else:else" name="&lt;condition&gt;" scadeOid="!ed/a867/47C/164C/5e3d84323b0f">
																					<activationCondition>
																						<ActivationCondition condition="outputs activated"/>
																					</activationCondition>
																					<children>
																						<PathElement index="854" ident="MTC_cond" name="$and#8" scadeOid="!ed/a867/47C/164C/5e3d84323b0f">
																							<children>
																								<PathElement index="855" ident="MTC_cond" name="$not#8" scadeOid="!ed/a867/47C/164C/5e3d84323b0f">
																									<activationCondition>
																										<ActivationCondition condition=" not c and b"/>
																									</activationCondition>
																									<children>
																										<PathElement index="856" ident="MTC_cond" name="a" scadeOid="!ed/a867/47C/164C/5e3d84323b0f" path="850"/>
																									</children>
																								</PathElement>
																								<PathElement index="857" ident="MTC_cond" name="$not#9" scadeOid="!ed/a867/47C/164C/5e3d84323b0f" rightExprIndex="1">
																									<activationCondition>
																										<ActivationCondition condition=" not a and b"/>
																									</activationCondition>
																									<children>
																										<PathElement index="858" ident="MTC_cond" name="c" scadeOid="!ed/a867/47C/164C/5e3d84323b0f" path="851"/>
																									</children>
																								</PathElement>
																								<PathElement index="859" ident="MTC_cond" name="b" scadeOid="!ed/a867/47C/164C/5e3d84323b0f" rightExprIndex="2" path="852">
																									<activationCondition>
																										<ActivationCondition condition=" not a and  not c"/>
																									</activationCondition>
																								</PathElement>
																							</children>
																						</PathElement>
																					</children>
																				</PathElement>
																			</rootPaths>
																			<children>
																				<IfBranch index="860" name="then" criterionEntity="692">
																					<rootPaths>
																						<PathElement index="861" ident="Calculated_value/IfBlock1:else:else:else:else:else:else:then:Output1" name="Output1" scadeOid="!ed/511f/552E/1160/5e3c12db68d9">
																							<activationCondition>
																								<ActivationCondition condition="outputs activated"/>
																							</activationCondition>
																							<children>
																								<PathElement index="862" ident="Calculated_value/IfBlock1:else:else:else:else:else:else:then:_L1" name="value2" scadeOid="!ed/5119/552E/1160/5e3c12d910b"/>
																							</children>
																						</PathElement>
																					</rootPaths>
																				</IfBranch>
																				<IfBranch index="863" name="else" criterionEntity="692">
																					<rootPaths>
																						<PathElement index="864" ident="Calculated_value/IfBlock1:else:else:else:else:else:else:else:Output1" name="Output1" scadeOid="!ed/5166/552E/1160/5e3c13625bd3">
																							<activationCondition>
																								<ActivationCondition condition="outputs activated"/>
																							</activationCondition>
																							<children>
																								<PathElement index="865" ident="Calculated_value/IfBlock1:else:else:else:else:else:else:else:_L1" name="Notification_Defaillance" scadeOid="!ed/515e/552E/1160/5e3c13521350"/>
																							</children>
																						</PathElement>
																					</rootPaths>
																				</IfBranch>
																			</children>
																		</IfBranch>
																	</children>
																</IfBranch>
															</children>
														</IfBranch>
													</children>
												</IfBranch>
											</children>
										</IfBranch>
									</children>
								</IfBranch>
							</children>
						</IfBlock>
					</controls>
				</Operator>
				<Operator index="866" name="MTCEx::MTC_Observers::Calculated_value_PATHS1_MTC_OBS" kind="1"/>
				<Operator index="867" name="MTCEx::MTC_Observers::Calculated_value_PATHS2_MTC_OBS" kind="1"/>
				<Operator index="868" name="MTCEx::MTC_Observers::Calculated_value_PATHS3_MTC_OBS" kind="1"/>
				<Operator index="869" name="MTCEx::MTC_Observers::Calculated_value_PATHS4_MTC_OBS" kind="1"/>
				<Operator index="870" name="MTCEx::MTC_Observers::Calculated_value_PATHS5_MTC_OBS" kind="1"/>
				<Operator index="871" name="MTCEx::MTC_Observers::Calculated_value_PATHS6_MTC_OBS" kind="1"/>
				<Operator index="872" name="MTCEx::MTC_Observers::Calculated_value_PATHS7_MTC_OBS" kind="1"/>
				<Operator index="873" name="MTCEx::MTC_Observers::Check_Delta_3_1111_MTC_OBS" kind="1"/>
				<Operator index="874" name="MTCEx::MTC_Observers::Calculated_value_PATHS8_MTC_OBS" kind="1"/>
				<Operator index="875" name="MTCEx::MTC_Observers::Calculated_value_PATHS9_MTC_OBS" kind="1"/>
				<Operator index="876" name="MTCEx::MTC_Observers::Calculated_value_PATHS10_MTC_OBS" kind="1"/>
				<Operator index="877" name="Vote_Alog">
					<paths>
						<Path index="878" name="$flatten#1" AC="outputs activated or Check_interval_pH#1 and outputs activated or Check_interval_pH#2 and outputs activated or Check_interval_pH#3 and outputs activated" criterionEntity="983"/>
						<Path index="879" name="$if#1 -&gt; Calculated_value#1" criterionEntity="984"/>
						<Path index="880" name="Check_interval_pH#1 -&gt; Calculated_value#1" AC="outputs activated" criterionEntity="984"/>
						<Path index="881" name="$if#2 -&gt; Calculated_value#1" criterionEntity="984"/>
						<Path index="882" name="Check_interval_pH#2 -&gt; Calculated_value#1" AC="outputs activated" criterionEntity="984"/>
						<Path index="883" name="$if#3 -&gt; Calculated_value#1" criterionEntity="984"/>
						<Path index="884" name="Check_interval_pH#3 -&gt; Calculated_value#1" AC="outputs activated" criterionEntity="984"/>
						<Path index="885" name="$flatten#2" AC="outputs activated or Check_interval_Temperature#1 and outputs activated or Check_interval_Temperature#2 and outputs activated or Check_interval_Temperature#3 and outputs activated" criterionEntity="987"/>
						<Path index="886" name="$if#4 -&gt; Calculated_value#2" criterionEntity="988"/>
						<Path index="887" name="Check_interval_Temperature#1 -&gt; Calculated_value#2" AC="outputs activated" criterionEntity="988"/>
						<Path index="888" name="$if#5 -&gt; Calculated_value#2" criterionEntity="988"/>
						<Path index="889" name="Check_interval_Temperature#2 -&gt; Calculated_value#2" AC="outputs activated" criterionEntity="988"/>
						<Path index="890" name="$if#6 -&gt; Calculated_value#2" criterionEntity="988"/>
						<Path index="891" name="Check_interval_Temperature#3 -&gt; Calculated_value#2" AC="outputs activated" criterionEntity="988"/>
						<Path index="892" name="$flatten#3" AC="outputs activated or Check_interval_Redox#1 and outputs activated or Check_interval_Redox#2 and outputs activated or Check_interval_Redox#3 and outputs activated" criterionEntity="990"/>
						<Path index="893" name="$if#7 -&gt; Calculated_value#3" criterionEntity="991"/>
						<Path index="894" name="Check_interval_Redox#1 -&gt; Calculated_value#3" AC="outputs activated" criterionEntity="991"/>
						<Path index="895" name="$if#8 -&gt; Calculated_value#3" criterionEntity="991"/>
						<Path index="896" name="Check_interval_Redox#2 -&gt; Calculated_value#3" AC="outputs activated" criterionEntity="991"/>
						<Path index="897" name="$if#9 -&gt; Calculated_value#3" criterionEntity="991"/>
						<Path index="898" name="Check_interval_Redox#3 -&gt; Calculated_value#3" AC="outputs activated" criterionEntity="991"/>
					</paths>
					<rootPaths>
						<PathElement index="899" ident="Vote_Alog/pH" name="pH" scadeOid="!ed/518e/552E/1160/5e3c13e92317">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="900" ident="Vote_Alog/_L18" name="Calculated_value#1" scadeOid="!ed/5173/552E/1160/5e3c13cc3f84"/>
							</children>
						</PathElement>
						<PathElement index="901" ident="Vote_Alog/_L9" name="$flatten#1" scadeOid="!ed/4ad7/552E/1160/5e3bff2958d2" path="878">
							<activationCondition>
								<ActivationCondition condition="outputs activated or Check_interval_pH#1 and outputs activated or Check_interval_pH#2 and outputs activated or Check_interval_pH#3 and outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="902" ident="Vote_Alog/_L1" name="pH_Data" scadeOid="!ed/4e79/1A/127C/5e3ae2bf280d"/>
							</children>
						</PathElement>
						<PathElement index="903" ident="Vote_Alog/_L18" name="Calculated_value#1" scadeOid="!ed/5173/552E/1160/5e3c13cc3f84">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="904" ident="Vote_Alog/_L12" name="$if#1" scadeOid="!ed/4af1/552E/1160/5e3c00854bec" path="879">
									<children>
										<PathElement index="905" ident="Vote_Alog/_L4" name="Check_interval_pH#1" scadeOid="!ed/4ee4/1A/127C/5e3ae336278d" path="880"/>
										<PathElement index="906" ident="Vote_Alog/_L9" name="$flatten#1 o1 -&gt; $if#1 i1" scadeOid="!ed/4ad7/552E/1160/5e3bff2958d2">
											<activationCondition>
												<ActivationCondition condition="Check_interval_pH#1"/>
											</activationCondition>
										</PathElement>
										<PathElement index="907" ident="Vote_Alog/_L15" name="Beyond_Interval_value -&gt; $if#1 i2" scadeOid="!ed/4b30/552E/1160/5e3c01ee1e2b">
											<activationCondition>
												<ActivationCondition condition=" not Check_interval_pH#1"/>
											</activationCondition>
										</PathElement>
									</children>
								</PathElement>
								<PathElement index="908" ident="Vote_Alog/_L13" name="$if#2" scadeOid="!ed/4af9/552E/1160/5e3c008b4954" rightExprIndex="1" path="881">
									<children>
										<PathElement index="909" ident="Vote_Alog/_L10" name="Check_interval_pH#2" scadeOid="!ed/4ae5/552E/1160/5e3c00241d91" path="882"/>
										<PathElement index="910" ident="Vote_Alog/_L9" name="$flatten#1 o2 -&gt; $if#2 i1" scadeOid="!ed/4ad7/552E/1160/5e3bff2958d2">
											<activationCondition>
												<ActivationCondition condition="Check_interval_pH#2"/>
											</activationCondition>
										</PathElement>
										<PathElement index="911" ident="Vote_Alog/_L16" name="Beyond_Interval_value -&gt; $if#2 i2" scadeOid="!ed/4b36/552E/1160/5e3c01ff7b8d">
											<activationCondition>
												<ActivationCondition condition=" not Check_interval_pH#2"/>
											</activationCondition>
										</PathElement>
									</children>
								</PathElement>
								<PathElement index="912" ident="Vote_Alog/_L14" name="$if#3" scadeOid="!ed/4b01/552E/1160/5e3c008e69f7" rightExprIndex="2" path="883">
									<children>
										<PathElement index="913" ident="Vote_Alog/_L11" name="Check_interval_pH#3" scadeOid="!ed/4aeb/552E/1160/5e3c00314410" path="884"/>
										<PathElement index="914" ident="Vote_Alog/_L9" name="$flatten#1 o3 -&gt; $if#3 i1" scadeOid="!ed/4ad7/552E/1160/5e3bff2958d2">
											<activationCondition>
												<ActivationCondition condition="Check_interval_pH#3"/>
											</activationCondition>
										</PathElement>
										<PathElement index="915" ident="Vote_Alog/_L17" name="Beyond_Interval_value -&gt; $if#3 i2" scadeOid="!ed/4b3c/552E/1160/5e3c020665c8">
											<activationCondition>
												<ActivationCondition condition=" not Check_interval_pH#3"/>
											</activationCondition>
										</PathElement>
									</children>
								</PathElement>
								<PathElement index="916" ident="Vote_Alog/_L19" name="Delta_pH" scadeOid="!ed/5179/552E/1160/5e3c13d9986" rightExprIndex="3"/>
							</children>
						</PathElement>
						<PathElement index="917" ident="Vote_Alog/_L4" name="Check_interval_pH#1" scadeOid="!ed/4ee4/1A/127C/5e3ae336278d">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="918" ident="Vote_Alog/_L9" name="$flatten#1 o1 -&gt; Check_interval_pH#1 i1" scadeOid="!ed/4ad7/552E/1160/5e3bff2958d2"/>
							</children>
						</PathElement>
						<PathElement index="919" ident="Vote_Alog/_L10" name="Check_interval_pH#2" scadeOid="!ed/4ae5/552E/1160/5e3c00241d91">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="920" ident="Vote_Alog/_L9" name="$flatten#1 o2 -&gt; Check_interval_pH#2 i1" scadeOid="!ed/4ad7/552E/1160/5e3bff2958d2"/>
							</children>
						</PathElement>
						<PathElement index="921" ident="Vote_Alog/_L11" name="Check_interval_pH#3" scadeOid="!ed/4aeb/552E/1160/5e3c00314410">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="922" ident="Vote_Alog/_L9" name="$flatten#1 o3 -&gt; Check_interval_pH#3 i1" scadeOid="!ed/4ad7/552E/1160/5e3bff2958d2"/>
							</children>
						</PathElement>
						<PathElement index="923" ident="Vote_Alog/Temperature" name="Temperature" scadeOid="!ed/5208/552E/1160/5e3c14e73a4e">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="924" ident="Vote_Alog/_L34" name="Calculated_value#2" scadeOid="!ed/51f3/552E/1160/5e3c14cd2794"/>
							</children>
						</PathElement>
						<PathElement index="925" ident="Vote_Alog/_L22" name="$flatten#2" scadeOid="!ed/5198/552E/1160/5e3c142d118d" path="885">
							<activationCondition>
								<ActivationCondition condition="outputs activated or Check_interval_Temperature#1 and outputs activated or Check_interval_Temperature#2 and outputs activated or Check_interval_Temperature#3 and outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="926" ident="Vote_Alog/_L2" name="Temperature_Data" scadeOid="!ed/4e95/1A/127C/5e3ae2c11535"/>
							</children>
						</PathElement>
						<PathElement index="927" ident="Vote_Alog/_L34" name="Calculated_value#2" scadeOid="!ed/51f3/552E/1160/5e3c14cd2794">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="928" ident="Vote_Alog/_L28" name="$if#4" scadeOid="!ed/51bf/552E/1160/5e3c145c4ecb" path="886">
									<children>
										<PathElement index="929" ident="Vote_Alog/_L6" name="Check_interval_Temperature#1" scadeOid="!ed/4ef0/1A/127C/5e3ae35757" path="887"/>
										<PathElement index="930" ident="Vote_Alog/_L22" name="$flatten#2 o1 -&gt; $if#4 i1" scadeOid="!ed/5198/552E/1160/5e3c142d118d">
											<activationCondition>
												<ActivationCondition condition="Check_interval_Temperature#1"/>
											</activationCondition>
										</PathElement>
										<PathElement index="931" ident="Vote_Alog/_L31" name="Beyond_Interval_value -&gt; $if#4 i2" scadeOid="!ed/51e1/552E/1160/5e3c147f7ae">
											<activationCondition>
												<ActivationCondition condition=" not Check_interval_Temperature#1"/>
											</activationCondition>
										</PathElement>
									</children>
								</PathElement>
								<PathElement index="932" ident="Vote_Alog/_L29" name="$if#5" scadeOid="!ed/51cb/552E/1160/5e3c145e2dec" rightExprIndex="1" path="888">
									<children>
										<PathElement index="933" ident="Vote_Alog/_L26" name="Check_interval_Temperature#2" scadeOid="!ed/51b3/552E/1160/5e3c144f1927" path="889"/>
										<PathElement index="934" ident="Vote_Alog/_L22" name="$flatten#2 o2 -&gt; $if#5 i1" scadeOid="!ed/5198/552E/1160/5e3c142d118d">
											<activationCondition>
												<ActivationCondition condition="Check_interval_Temperature#2"/>
											</activationCondition>
										</PathElement>
										<PathElement index="935" ident="Vote_Alog/_L32" name="Beyond_Interval_value -&gt; $if#5 i2" scadeOid="!ed/51e7/552E/1160/5e3c14883736">
											<activationCondition>
												<ActivationCondition condition=" not Check_interval_Temperature#2"/>
											</activationCondition>
										</PathElement>
									</children>
								</PathElement>
								<PathElement index="936" ident="Vote_Alog/_L30" name="$if#6" scadeOid="!ed/51d7/552E/1160/5e3c1460419c" rightExprIndex="2" path="890">
									<children>
										<PathElement index="937" ident="Vote_Alog/_L27" name="Check_interval_Temperature#3" scadeOid="!ed/51bb/552E/1160/5e3c14502d39" path="891"/>
										<PathElement index="938" ident="Vote_Alog/_L22" name="$flatten#2 o3 -&gt; $if#6 i1" scadeOid="!ed/5198/552E/1160/5e3c142d118d">
											<activationCondition>
												<ActivationCondition condition="Check_interval_Temperature#3"/>
											</activationCondition>
										</PathElement>
										<PathElement index="939" ident="Vote_Alog/_L33" name="Beyond_Interval_value -&gt; $if#6 i2" scadeOid="!ed/51ed/552E/1160/5e3c148e48ce">
											<activationCondition>
												<ActivationCondition condition=" not Check_interval_Temperature#3"/>
											</activationCondition>
										</PathElement>
									</children>
								</PathElement>
								<PathElement index="940" ident="Vote_Alog/_L36" name="Delta_Temperature" scadeOid="!ed/51ff/552E/1160/5e3c14df4091" rightExprIndex="3"/>
							</children>
						</PathElement>
						<PathElement index="941" ident="Vote_Alog/_L6" name="Check_interval_Temperature#1" scadeOid="!ed/4ef0/1A/127C/5e3ae35757">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="942" ident="Vote_Alog/_L22" name="$flatten#2 o1 -&gt; Check_interval_Temperature#1 i1" scadeOid="!ed/5198/552E/1160/5e3c142d118d"/>
							</children>
						</PathElement>
						<PathElement index="943" ident="Vote_Alog/_L26" name="Check_interval_Temperature#2" scadeOid="!ed/51b3/552E/1160/5e3c144f1927">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="944" ident="Vote_Alog/_L22" name="$flatten#2 o2 -&gt; Check_interval_Temperature#2 i1" scadeOid="!ed/5198/552E/1160/5e3c142d118d"/>
							</children>
						</PathElement>
						<PathElement index="945" ident="Vote_Alog/_L27" name="Check_interval_Temperature#3" scadeOid="!ed/51bb/552E/1160/5e3c14502d39">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="946" ident="Vote_Alog/_L22" name="$flatten#2 o3 -&gt; Check_interval_Temperature#3 i1" scadeOid="!ed/5198/552E/1160/5e3c142d118d"/>
							</children>
						</PathElement>
						<PathElement index="947" ident="Vote_Alog/Redox" name="Redox" scadeOid="!ed/5266/552E/1160/5e3c15bc16df">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="948" ident="Vote_Alog/_L45" name="Calculated_value#3" scadeOid="!ed/5257/552E/1160/5e3c15a14573"/>
							</children>
						</PathElement>
						<PathElement index="949" ident="Vote_Alog/_L25" name="$flatten#3" scadeOid="!ed/51a0/552E/1160/5e3c142f1288" path="892">
							<activationCondition>
								<ActivationCondition condition="outputs activated or Check_interval_Redox#1 and outputs activated or Check_interval_Redox#2 and outputs activated or Check_interval_Redox#3 and outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="950" ident="Vote_Alog/_L3" name="Redox_Data" scadeOid="!ed/4eb1/1A/127C/5e3ae2c37d96"/>
							</children>
						</PathElement>
						<PathElement index="951" ident="Vote_Alog/_L45" name="Calculated_value#3" scadeOid="!ed/5257/552E/1160/5e3c15a14573">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="952" ident="Vote_Alog/_L39" name="$if#7" scadeOid="!ed/5223/552E/1160/5e3c153529c7" path="893">
									<children>
										<PathElement index="953" ident="Vote_Alog/_L5" name="Check_interval_Redox#1" scadeOid="!ed/4eea/1A/127C/5e3ae34dd54" path="894"/>
										<PathElement index="954" ident="Vote_Alog/_L25" name="$flatten#3 o1 -&gt; $if#7 i1" scadeOid="!ed/51a0/552E/1160/5e3c142f1288">
											<activationCondition>
												<ActivationCondition condition="Check_interval_Redox#1"/>
											</activationCondition>
										</PathElement>
										<PathElement index="955" ident="Vote_Alog/_L42" name="Beyond_Interval_value -&gt; $if#7 i2" scadeOid="!ed/5245/552E/1160/5e3c15621994">
											<activationCondition>
												<ActivationCondition condition=" not Check_interval_Redox#1"/>
											</activationCondition>
										</PathElement>
									</children>
								</PathElement>
								<PathElement index="956" ident="Vote_Alog/_L40" name="$if#8" scadeOid="!ed/522f/552E/1160/5e3c15366ef5" rightExprIndex="1" path="895">
									<children>
										<PathElement index="957" ident="Vote_Alog/_L37" name="Check_interval_Redox#2" scadeOid="!ed/5217/552E/1160/5e3c15154bad" path="896"/>
										<PathElement index="958" ident="Vote_Alog/_L25" name="$flatten#3 o2 -&gt; $if#8 i1" scadeOid="!ed/51a0/552E/1160/5e3c142f1288">
											<activationCondition>
												<ActivationCondition condition="Check_interval_Redox#2"/>
											</activationCondition>
										</PathElement>
										<PathElement index="959" ident="Vote_Alog/_L43" name="Beyond_Interval_value -&gt; $if#8 i2" scadeOid="!ed/524b/552E/1160/5e3c15756d3e">
											<activationCondition>
												<ActivationCondition condition=" not Check_interval_Redox#2"/>
											</activationCondition>
										</PathElement>
									</children>
								</PathElement>
								<PathElement index="960" ident="Vote_Alog/_L41" name="$if#9" scadeOid="!ed/523b/552E/1160/5e3c15385c6a" rightExprIndex="2" path="897">
									<children>
										<PathElement index="961" ident="Vote_Alog/_L38" name="Check_interval_Redox#3" scadeOid="!ed/521f/552E/1160/5e3c15192bbe" path="898"/>
										<PathElement index="962" ident="Vote_Alog/_L25" name="$flatten#3 o3 -&gt; $if#9 i1" scadeOid="!ed/51a0/552E/1160/5e3c142f1288">
											<activationCondition>
												<ActivationCondition condition="Check_interval_Redox#3"/>
											</activationCondition>
										</PathElement>
										<PathElement index="963" ident="Vote_Alog/_L44" name="Beyond_Interval_value -&gt; $if#9 i2" scadeOid="!ed/5251/552E/1160/5e3c158e7fcd">
											<activationCondition>
												<ActivationCondition condition=" not Check_interval_Redox#3"/>
											</activationCondition>
										</PathElement>
									</children>
								</PathElement>
								<PathElement index="964" ident="Vote_Alog/_L46" name="Delta_Redox" scadeOid="!ed/525d/552E/1160/5e3c15b37b9f" rightExprIndex="3"/>
							</children>
						</PathElement>
						<PathElement index="965" ident="Vote_Alog/_L5" name="Check_interval_Redox#1" scadeOid="!ed/4eea/1A/127C/5e3ae34dd54">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="966" ident="Vote_Alog/_L25" name="$flatten#3 o1 -&gt; Check_interval_Redox#1 i1" scadeOid="!ed/51a0/552E/1160/5e3c142f1288"/>
							</children>
						</PathElement>
						<PathElement index="967" ident="Vote_Alog/_L37" name="Check_interval_Redox#2" scadeOid="!ed/5217/552E/1160/5e3c15154bad">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="968" ident="Vote_Alog/_L25" name="$flatten#3 o2 -&gt; Check_interval_Redox#2 i1" scadeOid="!ed/51a0/552E/1160/5e3c142f1288"/>
							</children>
						</PathElement>
						<PathElement index="969" ident="Vote_Alog/_L38" name="Check_interval_Redox#3" scadeOid="!ed/521f/552E/1160/5e3c15192bbe">
							<activationCondition>
								<ActivationCondition condition="outputs activated"/>
							</activationCondition>
							<children>
								<PathElement index="970" ident="Vote_Alog/_L25" name="$flatten#3 o3 -&gt; Check_interval_Redox#3 i1" scadeOid="!ed/51a0/552E/1160/5e3c142f1288"/>
							</children>
						</PathElement>
					</rootPaths>
					<calls>
						<Call index="971" instance="1" criterionEntity="985" operator="733"/>
						<Call index="972" instance="1" criterionEntity="986" operator="14"/>
						<Call index="973" instance="2" criterionEntity="986" operator="14"/>
						<Call index="974" instance="3" criterionEntity="986" operator="14"/>
						<Call index="975" instance="2" criterionEntity="985" operator="733"/>
						<Call index="976" instance="1" criterionEntity="989" operator="2"/>
						<Call index="977" instance="2" criterionEntity="989" operator="2"/>
						<Call index="978" instance="3" criterionEntity="989" operator="2"/>
						<Call index="979" instance="3" criterionEntity="985" operator="733"/>
						<Call index="980" instance="1" criterionEntity="992" operator="26"/>
						<Call index="981" instance="2" criterionEntity="992" operator="26"/>
						<Call index="982" instance="3" criterionEntity="992" operator="26"/>
					</calls>
				</Operator>
				<Operator index="983" name="MTCEx::MTC_Observers::Vote_Alog_PATHS1_MTC_OBS" kind="1"/>
				<Operator index="984" name="MTCEx::MTC_Observers::Vote_Alog_PATHS2_MTC_OBS" kind="1"/>
				<Operator index="985" name="MTCEx::MTC_Observers::Calculated_value_1110_MTC_OBS" kind="1"/>
				<Operator index="986" name="MTCEx::MTC_Observers::Check_interval_pH_1_MTC_OBS" kind="1"/>
				<Operator index="987" name="MTCEx::MTC_Observers::Vote_Alog_PATHS3_MTC_OBS" kind="1"/>
				<Operator index="988" name="MTCEx::MTC_Observers::Vote_Alog_PATHS4_MTC_OBS" kind="1"/>
				<Operator index="989" name="MTCEx::MTC_Observers::Check_interval_Temperature_1_MTC_OBS" kind="1"/>
				<Operator index="990" name="MTCEx::MTC_Observers::Vote_Alog_PATHS5_MTC_OBS" kind="1"/>
				<Operator index="991" name="MTCEx::MTC_Observers::Vote_Alog_PATHS6_MTC_OBS" kind="1"/>
				<Operator index="992" name="MTCEx::MTC_Observers::Check_interval_Redox_1_MTC_OBS" kind="1"/>
				<Operator index="993" name="Controller">
					<paths>
						<Path index="994" name="&lt;last store&gt;" AC="Last Used and init" criterionEntity="1164"/>
					</paths>
					<rootPaths>
						<PathElement index="995" ident="Controller/MTC_Send_Data" name="&lt;default Send_Data&gt;" scadeOid="!ed/aa6a/47C/164C/5e3d843257c4">
							<activationCondition>
								<ActivationCondition condition="Default Used"/>
							</activationCondition>
							<children>
								<PathElement index="996" ident="MTC_Send_Data_def" name="Normal_Send_Data" scadeOid="!ed/aa6a/47C/164C/5e3d843257c4"/>
							</children>
						</PathElement>
						<PathElement index="997" ident="Controller/store" name="&lt;last store&gt;" scadeOid="!ed/aa77/47C/164C/5e3d8432f0" path="994">
							<activationCondition>
								<ActivationCondition condition="Last Used and init"/>
							</activationCondition>
							<children>
								<PathElement index="998" ident="MTC_store_last" name="Normal_Value" scadeOid="!ed/aa77/47C/164C/5e3d8432f0"/>
							</children>
						</PathElement>
						<PathElement index="999" ident="Controller/Store_Time" name="&lt;default Store_Time&gt;" scadeOid="!ed/aa8f/47C/164C/5e3d84325834">
							<activationCondition>
								<ActivationCondition condition="Default Used"/>
							</activationCondition>
							<children>
								<PathElement index="1000" ident="MTC_Store_Time_def" name="&lt;default Store_Time&gt;" scadeOid="!ed/aa8f/47C/164C/5e3d84325834"/>
							</children>
						</PathElement>
						<PathElement index="1001" ident="Controller/timeout" name="&lt;default timeout&gt;" scadeOid="!ed/aa9a/47C/164C/5e3d843244f2">
							<activationCondition>
								<ActivationCondition condition="Default Used"/>
							</activationCondition>
							<children>
								<PathElement index="1002" ident="MTC_timeout_def" name="&lt;default timeout&gt;" scadeOid="!ed/aa9a/47C/164C/5e3d843244f2"/>
							</children>
						</PathElement>
					</rootPaths>
					<controls>
						<StateMachine index="1003" name="SM1">
							<children>
								<State index="1004" name="Normal_Station" criterionEntity="1165">
									<paths>
										<Path index="1005" name="notif" criterionEntity="1174"/>
										<Path index="1006" name="$or#1 -&gt; notif" criterionEntity="1174"/>
										<Path index="1007" name="$or#1 -&gt; alarm" criterionEntity="1176"/>
										<Path index="1008" name="$or#1" criterionEntity="1177"/>
										<Path index="1009" name="$eq#1 -&gt; $or#1" AC=" not $eq#2 and  not $eq#3" criterionEntity="1177"/>
										<Path index="1010" name="$eq#2 -&gt; $or#1" AC=" not $eq#1 and  not $eq#3" criterionEntity="1177"/>
										<Path index="1011" name="$eq#3 -&gt; $or#1" AC=" not $eq#1 and  not $eq#2" criterionEntity="1177"/>
									</paths>
									<rootPaths>
										<PathElement index="1012" ident="Controller/SM1:Normal_Station:notif" name="notif" scadeOid="!ed/5297/552E/1160/5e3c168c5f43" path="1005">
											<children>
												<PathElement index="1013" ident="Controller/SM1:Normal_Station:_L8" name="$or#1 -&gt; notif" scadeOid="!ed/52a6/552E/1160/5e3c169d3f8c" path="1006"/>
											</children>
										</PathElement>
										<PathElement index="1014" ident="Controller/SM1:Normal_Station:_L5" name="Vote_Alog#1" scadeOid="!ed/528e/552E/1160/5e3c16585049">
											<children>
												<PathElement index="1015" ident="Controller/SM1:Normal_Station:_L2" name="Sensor_pH" scadeOid="!ed/4a8c/1A/127C/5e3ad60d1465"/>
												<PathElement index="1016" ident="Controller/SM1:Normal_Station:_L1" name="Sensor_Temperature" scadeOid="!ed/4a85/1A/127C/5e3ad60c4d6c" rightExprIndex="1"/>
												<PathElement index="1017" ident="Controller/SM1:Normal_Station:_L3" name="Sensor_Redox" scadeOid="!ed/4a93/1A/127C/5e3ad60e3875" rightExprIndex="2"/>
											</children>
										</PathElement>
										<PathElement index="1018" ident="Controller/SM1:Normal_Station:alarm" name="alarm" scadeOid="!ed/5b58/552E/1160/5e3c27066ec7">
											<children>
												<PathElement index="1019" ident="Controller/SM1:Normal_Station:_L8" name="$or#1 -&gt; alarm" scadeOid="!ed/52a6/552E/1160/5e3c169d3f8c" path="1007"/>
											</children>
										</PathElement>
										<PathElement index="1020" ident="Controller/SM1:Normal_Station:_L8" name="$or#1" scadeOid="!ed/52a6/552E/1160/5e3c169d3f8c" path="1008">
											<children>
												<PathElement index="1021" ident="Controller/SM1:Normal_Station:_L9" name="$eq#1" scadeOid="!ed/52b8/552E/1160/5e3c16b02e9" path="1009">
													<activationCondition>
														<ActivationCondition condition=" not $eq#2 and  not $eq#3"/>
													</activationCondition>
													<children>
														<PathElement index="1022" ident="Controller/SM1:Normal_Station:_L5" name="Vote_Alog#1 o1" scadeOid="!ed/528e/552E/1160/5e3c16585049"/>
														<PathElement index="1023" ident="Controller/SM1:Normal_Station:_L12" name="Notification_Defaillance -&gt; $eq#1 i2" scadeOid="!ed/52d2/552E/1160/5e3c16cb1c9e" rightExprIndex="1"/>
													</children>
												</PathElement>
												<PathElement index="1024" ident="Controller/SM1:Normal_Station:_L10" name="$eq#2" scadeOid="!ed/52c0/552E/1160/5e3c16b21754" rightExprIndex="1" path="1010">
													<activationCondition>
														<ActivationCondition condition=" not $eq#1 and  not $eq#3"/>
													</activationCondition>
													<children>
														<PathElement index="1025" ident="Controller/SM1:Normal_Station:_L5" name="Vote_Alog#1 o2" scadeOid="!ed/528e/552E/1160/5e3c16585049"/>
														<PathElement index="1026" ident="Controller/SM1:Normal_Station:_L12" name="Notification_Defaillance -&gt; $eq#2 i2" scadeOid="!ed/52d2/552E/1160/5e3c16cb1c9e" rightExprIndex="1"/>
													</children>
												</PathElement>
												<PathElement index="1027" ident="Controller/SM1:Normal_Station:_L11" name="$eq#3" scadeOid="!ed/52c8/552E/1160/5e3c16b3283e" rightExprIndex="2" path="1011">
													<activationCondition>
														<ActivationCondition condition=" not $eq#1 and  not $eq#2"/>
													</activationCondition>
													<children>
														<PathElement index="1028" ident="Controller/SM1:Normal_Station:_L12" name="Notification_Defaillance -&gt; $eq#3 i1" scadeOid="!ed/52d2/552E/1160/5e3c16cb1c9e"/>
														<PathElement index="1029" ident="Controller/SM1:Normal_Station:_L5" name="Vote_Alog#1 o3" scadeOid="!ed/528e/552E/1160/5e3c16585049" rightExprIndex="1"/>
													</children>
												</PathElement>
											</children>
										</PathElement>
									</rootPaths>
									<calls>
										<Call index="1030" instance="1" criterionEntity="1175" operator="877"/>
									</calls>
									<children>
										<Transition index="1031" name="&lt;2&gt;" criterionEntity="1166">
											<paths>
												<Path index="1032" name="notif -&gt; &lt;guard&gt;" AC=" not $or#1" criterionEntity="1167"/>
											</paths>
											<rootPaths>
												<PathElement index="1033" ident="Controller/SM1:Normal_Station:&lt;2&gt;" name="&lt;guard&gt;" scadeOid="!ed/aac2/47C/164C/5e3d8432417e">
													<activationCondition>
														<ActivationCondition condition=" not $or#1"/>
													</activationCondition>
													<children>
														<PathElement index="1034" ident="MTC_guard" name="$not#1" scadeOid="!ed/aac2/47C/164C/5e3d8432417e">
															<children>
																<PathElement index="1035" ident="MTC_guard" name="notif" scadeOid="!ed/aac2/47C/164C/5e3d8432417e" path="1032"/>
															</children>
														</PathElement>
													</children>
												</PathElement>
											</rootPaths>
										</Transition>
										<Transition index="1036" name="&lt;1&gt;" criterionEntity="1166">
											<paths>
												<Path index="1037" name="notif -&gt; &lt;guard&gt;" criterionEntity="1168"/>
											</paths>
											<rootPaths>
												<PathElement index="1038" ident="Controller/SM1:Normal_Station:&lt;1&gt;" name="&lt;guard&gt;" scadeOid="!ed/aadc/47C/164C/5e3d84325705">
													<children>
														<PathElement index="1039" ident="MTC_guard" name="notif" scadeOid="!ed/aadc/47C/164C/5e3d84325705" path="1037"/>
													</children>
												</PathElement>
											</rootPaths>
										</Transition>
									</children>
								</State>
								<State index="1040" name="Defaillance_Station" criterionEntity="1165"/>
								<State index="1041" name="Calculate" criterionEntity="1165">
									<paths>
										<Path index="1042" name="$lt#1 -&gt; alarm" AC=" not $lt#2 and  not $lt#3" criterionEntity="1180"/>
										<Path index="1043" name="$lt#2 -&gt; alarm" AC=" not $lt#1 and  not $lt#3" criterionEntity="1180"/>
										<Path index="1044" name="$lt#3 -&gt; alarm" AC=" not $lt#1 and  not $lt#2" criterionEntity="1180"/>
										<Path index="1045" name="Store_Time" AC="false" criterionEntity="1182"/>
									</paths>
									<rootPaths>
										<PathElement index="1046" ident="Controller/SM1:Calculate:MTC_Send_Data" name="Send_Data" scadeOid="!ed/546f/552E/1160/5e3c19e074c4">
											<children>
												<PathElement index="1047" ident="Controller/SM1:Calculate:_L2" name="$make#3" scadeOid="!ed/5467/552E/1160/5e3c19e0238c">
													<children>
														<PathElement index="1048" ident="Controller/SM1:Calculate:_L4" name="Vote_Alog#3 o2 -&gt; $make#3 i1" scadeOid="!ed/546b/552E/1160/5e3c19e05d76"/>
														<PathElement index="1049" ident="Controller/SM1:Calculate:_L4" name="Vote_Alog#3 o1 -&gt; $make#3 i2" scadeOid="!ed/546b/552E/1160/5e3c19e05d76"/>
														<PathElement index="1050" ident="Controller/SM1:Calculate:_L4" name="Vote_Alog#3 o3 -&gt; $make#3 i3" scadeOid="!ed/546b/552E/1160/5e3c19e05d76"/>
														<PathElement index="1051" ident="Controller/SM1:Calculate:_L7" name="Sensor_GPS" scadeOid="!ed/5470/552E/1160/5e3c19e07093"/>
														<PathElement index="1052" ident="Controller/SM1:Calculate:_L9" name="Time" scadeOid="!ed/5474/552E/1160/5e3c19e05617"/>
													</children>
												</PathElement>
											</children>
										</PathElement>
										<PathElement index="1053" ident="Controller/SM1:Calculate:_L4" name="Vote_Alog#3" scadeOid="!ed/546b/552E/1160/5e3c19e05d76">
											<children>
												<PathElement index="1054" ident="Controller/SM1:Calculate:_L1" name="Sensor_pH" scadeOid="!ed/5465/552E/1160/5e3c19e07523"/>
												<PathElement index="1055" ident="Controller/SM1:Calculate:_L8" name="Sensor_Temperature" scadeOid="!ed/5472/552E/1160/5e3c19e0251e" rightExprIndex="1"/>
												<PathElement index="1056" ident="Controller/SM1:Calculate:_L3" name="Sensor_Redox" scadeOid="!ed/5469/552E/1160/5e3c19e02cf2" rightExprIndex="2"/>
											</children>
										</PathElement>
										<PathElement index="1057" ident="Controller/SM1:Calculate:alarm" name="alarm" scadeOid="!ed/5b3e/552E/1160/5e3c26f74f6e">
											<children>
												<PathElement index="1058" ident="Controller/SM1:Calculate:_L20" name="$or#2" scadeOid="!ed/5a39/552E/1160/5e3c2414264e">
													<children>
														<PathElement index="1059" ident="Controller/SM1:Calculate:_L17" name="$lt#1" scadeOid="!ed/5a18/552E/1160/5e3c23b27358" path="1042">
															<activationCondition>
																<ActivationCondition condition=" not $lt#2 and  not $lt#3"/>
															</activationCondition>
															<children>
																<PathElement index="1060" ident="Controller/SM1:Calculate:_L15" name="$mult#1" scadeOid="!ed/59e3/552E/1160/5e3c239fd2b">
																	<children>
																		<PathElement index="1061" ident="Controller/SM1:Calculate:_L12" name="Mean_10_Table#1 o1 -&gt; $mult#1 i1" scadeOid="!ed/59bc/552E/1160/5e3c23181537"/>
																		<PathElement index="1062" ident="Controller/SM1:Calculate:_L16" name="$mult#1 i2" scadeOid="!ed/59f5/552E/1160/5e3c23a7e93" rightExprIndex="1"/>
																	</children>
																</PathElement>
																<PathElement index="1063" ident="Controller/SM1:Calculate:_L19" name="math::Abs#1" scadeOid="!ed/5a32/552E/1160/5e3c23f513c6" rightExprIndex="1"/>
															</children>
														</PathElement>
														<PathElement index="1064" ident="Controller/SM1:Calculate:_L29" name="$lt#2" scadeOid="!ed/5afb/552E/1160/5e3c25f55df3" rightExprIndex="1" path="1043">
															<activationCondition>
																<ActivationCondition condition=" not $lt#1 and  not $lt#3"/>
															</activationCondition>
															<children>
																<PathElement index="1065" ident="Controller/SM1:Calculate:_L21" name="$mult#2" scadeOid="!ed/5a4f/552E/1160/5e3c24214a30">
																	<children>
																		<PathElement index="1066" ident="Controller/SM1:Calculate:_L12" name="Mean_10_Table#1 o2 -&gt; $mult#2 i1" scadeOid="!ed/59bc/552E/1160/5e3c23181537"/>
																		<PathElement index="1067" ident="Controller/SM1:Calculate:_L27" name="$mult#2 i2" scadeOid="!ed/5ab3/552E/1160/5e3c245e10f2" rightExprIndex="1"/>
																	</children>
																</PathElement>
																<PathElement index="1068" ident="Controller/SM1:Calculate:_L25" name="math::Abs#2" scadeOid="!ed/5aa3/552E/1160/5e3c243d64f2" rightExprIndex="1"/>
															</children>
														</PathElement>
														<PathElement index="1069" ident="Controller/SM1:Calculate:_L30" name="$lt#3" scadeOid="!ed/5b0d/552E/1160/5e3c260631f1" rightExprIndex="2" path="1044">
															<activationCondition>
																<ActivationCondition condition=" not $lt#1 and  not $lt#2"/>
															</activationCondition>
															<children>
																<PathElement index="1070" ident="Controller/SM1:Calculate:_L22" name="$mult#3" scadeOid="!ed/5a6b/552E/1160/5e3c242e4812">
																	<children>
																		<PathElement index="1071" ident="Controller/SM1:Calculate:_L12" name="Mean_10_Table#1 o3 -&gt; $mult#3 i1" scadeOid="!ed/59bc/552E/1160/5e3c23181537"/>
																		<PathElement index="1072" ident="Controller/SM1:Calculate:_L28" name="$mult#3 i2" scadeOid="!ed/5ad7/552E/1160/5e3c246557aa" rightExprIndex="1"/>
																	</children>
																</PathElement>
																<PathElement index="1073" ident="Controller/SM1:Calculate:_L26" name="math::Abs#3" scadeOid="!ed/5aaa/552E/1160/5e3c24443a6a" rightExprIndex="1"/>
															</children>
														</PathElement>
													</children>
												</PathElement>
											</children>
										</PathElement>
										<PathElement index="1074" ident="Controller/SM1:Calculate:_L12" name="Mean_10_Table#1" scadeOid="!ed/59bc/552E/1160/5e3c23181537">
											<children>
												<PathElement index="1075" ident="Controller/SM1:Calculate:_L42" name="last 'store" scadeOid="!ed/5d23/552E/1160/5e3c29ae55b8"/>
											</children>
										</PathElement>
										<PathElement index="1076" ident="Controller/SM1:Calculate:_L19" name="math::Abs#1" scadeOid="!ed/5a32/552E/1160/5e3c23f513c6">
											<children>
												<PathElement index="1077" ident="Controller/SM1:Calculate:_L18" name="$minus#1" scadeOid="!ed/5a2b/552E/1160/5e3c23df4b4a">
													<activationCondition>
														<ActivationCondition condition=" not $lt#2 and  not $lt#3 or math::Abs#1/$lte#1 and  not $lt#2 and  not $lt#3 or  not math::Abs#1/$lte#1 and  not $lt#2 and  not $lt#3"/>
													</activationCondition>
													<children>
														<PathElement index="1078" ident="Controller/SM1:Calculate:_L12" name="Mean_10_Table#1 o1 -&gt; $minus#1 i1" scadeOid="!ed/59bc/552E/1160/5e3c23181537"/>
														<PathElement index="1079" ident="Controller/SM1:Calculate:_L4" name="Vote_Alog#3 o2 -&gt; $minus#1 i2" scadeOid="!ed/546b/552E/1160/5e3c19e05d76" rightExprIndex="1"/>
													</children>
												</PathElement>
											</children>
										</PathElement>
										<PathElement index="1080" ident="Controller/SM1:Calculate:_L25" name="math::Abs#2" scadeOid="!ed/5aa3/552E/1160/5e3c243d64f2">
											<children>
												<PathElement index="1081" ident="Controller/SM1:Calculate:_L23" name="$minus#2" scadeOid="!ed/5a7d/552E/1160/5e3c24336c8a">
													<activationCondition>
														<ActivationCondition condition=" not $lt#1 and  not $lt#3 or math::Abs#2/$lte#1 and  not $lt#1 and  not $lt#3 or  not math::Abs#2/$lte#1 and  not $lt#1 and  not $lt#3"/>
													</activationCondition>
													<children>
														<PathElement index="1082" ident="Controller/SM1:Calculate:_L12" name="Mean_10_Table#1 o2 -&gt; $minus#2 i1" scadeOid="!ed/59bc/552E/1160/5e3c23181537"/>
														<PathElement index="1083" ident="Controller/SM1:Calculate:_L4" name="Vote_Alog#3 o1 -&gt; $minus#2 i2" scadeOid="!ed/546b/552E/1160/5e3c19e05d76" rightExprIndex="1"/>
													</children>
												</PathElement>
											</children>
										</PathElement>
										<PathElement index="1084" ident="Controller/SM1:Calculate:_L26" name="math::Abs#3" scadeOid="!ed/5aaa/552E/1160/5e3c24443a6a">
											<children>
												<PathElement index="1085" ident="Controller/SM1:Calculate:_L24" name="$minus#3" scadeOid="!ed/5a90/552E/1160/5e3c24376995">
													<activationCondition>
														<ActivationCondition condition=" not $lt#1 and  not $lt#2 or math::Abs#3/$lte#1 and  not $lt#1 and  not $lt#2 or  not math::Abs#3/$lte#1 and  not $lt#1 and  not $lt#2"/>
													</activationCondition>
													<children>
														<PathElement index="1086" ident="Controller/SM1:Calculate:_L12" name="Mean_10_Table#1 o3 -&gt; $minus#3 i1" scadeOid="!ed/59bc/552E/1160/5e3c23181537"/>
														<PathElement index="1087" ident="Controller/SM1:Calculate:_L4" name="Vote_Alog#3 o3 -&gt; $minus#3 i2" scadeOid="!ed/546b/552E/1160/5e3c19e05d76" rightExprIndex="1"/>
													</children>
												</PathElement>
											</children>
										</PathElement>
										<PathElement index="1088" ident="Controller/SM1:Calculate:Store_Time" name="Store_Time" scadeOid="!ed/60e2/552E/1160/5e3c31da6d40" path="1045">
											<activationCondition>
												<ActivationCondition condition="false"/>
											</activationCondition>
											<children>
												<PathElement index="1089" ident="Controller/SM1:Calculate:_L43" name="Time" scadeOid="!ed/608f/552E/1160/5e3c3153b9d"/>
											</children>
										</PathElement>
									</rootPaths>
									<calls>
										<Call index="1090" instance="3" criterionEntity="1175" operator="877"/>
										<Call index="1091" instance="1" criterionEntity="1181" operator="41"/>
										<Call index="1092" instance="1" criterionEntity="702" operator="272"/>
										<Call index="1093" instance="2" criterionEntity="702" operator="246"/>
										<Call index="1094" instance="3" criterionEntity="702" operator="220"/>
									</calls>
									<children>
										<Transition index="1095" name="&lt;2&gt;" criterionEntity="1166">
											<paths>
												<Path index="1096" name="alarm -&gt; &lt;guard&gt;" AC=" not $or#2" criterionEntity="1169"/>
											</paths>
											<rootPaths>
												<PathElement index="1097" ident="Controller/SM1:Calculate:&lt;2&gt;" name="&lt;guard&gt;" scadeOid="!ed/ab07/47C/164C/5e3d843235c3">
													<activationCondition>
														<ActivationCondition condition=" not $or#2"/>
													</activationCondition>
													<children>
														<PathElement index="1098" ident="MTC_guard" name="$not#2" scadeOid="!ed/ab07/47C/164C/5e3d843235c3">
															<children>
																<PathElement index="1099" ident="MTC_guard" name="alarm" scadeOid="!ed/ab07/47C/164C/5e3d843235c3" path="1096"/>
															</children>
														</PathElement>
													</children>
												</PathElement>
											</rootPaths>
										</Transition>
										<Transition index="1100" name="&lt;1&gt;" criterionEntity="1166">
											<paths>
												<Path index="1101" name="alarm -&gt; &lt;guard&gt;" criterionEntity="1170"/>
											</paths>
											<rootPaths>
												<PathElement index="1102" ident="Controller/SM1:Calculate:&lt;1&gt;" name="&lt;guard&gt;" scadeOid="!ed/ab1f/47C/164C/5e3d84326cc0">
													<children>
														<PathElement index="1103" ident="MTC_guard" name="alarm" scadeOid="!ed/ab1f/47C/164C/5e3d84326cc0" path="1101"/>
													</children>
												</PathElement>
											</rootPaths>
										</Transition>
										<IfBlock index="1104" name="IfBlock1">
											<paths>
												<Path index="1105" name="alarm -&gt; &lt;condition&gt;" criterionEntity="1178"/>
											</paths>
											<rootPaths>
												<PathElement index="1106" ident="Controller/SM1:Calculate:IfBlock1" name="&lt;condition&gt;" scadeOid="!ed/abfa/47C/164C/5e3d84325b59">
													<children>
														<PathElement index="1107" ident="MTC_cond" name="alarm" scadeOid="!ed/abfa/47C/164C/5e3d84325b59" path="1105"/>
													</children>
												</PathElement>
											</rootPaths>
											<children>
												<IfBranch index="1108" name="then" criterionEntity="692"/>
												<IfBranch index="1109" name="else" criterionEntity="692">
													<rootPaths>
														<PathElement index="1110" ident="Controller/SM1:Calculate:IfBlock1:else:store" name="store" scadeOid="!ed/5d9f/552E/1160/5e3c2b506983">
															<children>
																<PathElement index="1111" ident="Controller/SM1:Calculate:IfBlock1:else:_L15" name="Push_Table#1" scadeOid="!ed/5c3b/552E/1160/5e3c27cf2653"/>
															</children>
														</PathElement>
														<PathElement index="1112" ident="Controller/SM1:Calculate:IfBlock1:else:_L11" name="Vote_Alog#7" scadeOid="!ed/5c22/552E/1160/5e3c278e157e">
															<children>
																<PathElement index="1113" ident="Controller/SM1:Calculate:IfBlock1:else:_L5" name="Sensor_Temperature" scadeOid="!ed/5be3/552E/1160/5e3c275d2422"/>
																<PathElement index="1114" ident="Controller/SM1:Calculate:IfBlock1:else:_L6" name="Sensor_pH" scadeOid="!ed/5beb/552E/1160/5e3c27624763" rightExprIndex="1"/>
																<PathElement index="1115" ident="Controller/SM1:Calculate:IfBlock1:else:_L7" name="Sensor_Redox" scadeOid="!ed/5c0a/552E/1160/5e3c277f35fd" rightExprIndex="2"/>
															</children>
														</PathElement>
														<PathElement index="1116" ident="Controller/SM1:Calculate:IfBlock1:else:_L15" name="Push_Table#1" scadeOid="!ed/5c3b/552E/1160/5e3c27cf2653">
															<children>
																<PathElement index="1117" ident="Controller/SM1:Calculate:IfBlock1:else:_L29" name="last 'store" scadeOid="!ed/5e36/552E/1160/5e3c2bb14340"/>
																<PathElement index="1118" ident="Controller/SM1:Calculate:IfBlock1:else:_L19" name="$concat#2" scadeOid="!ed/5c75/552E/1160/5e3c28616471" rightExprIndex="1">
																	<children>
																		<PathElement index="1119" ident="Controller/SM1:Calculate:IfBlock1:else:_L20" name="$scalar_to_vector#1" scadeOid="!ed/5c89/552E/1160/5e3c286c1153">
																			<children>
																				<PathElement index="1120" ident="Controller/SM1:Calculate:IfBlock1:else:_L11" name="Vote_Alog#7 o1" scadeOid="!ed/5c22/552E/1160/5e3c278e157e"/>
																			</children>
																		</PathElement>
																		<PathElement index="1121" ident="Controller/SM1:Calculate:IfBlock1:else:_L21" name="$scalar_to_vector#2" scadeOid="!ed/5ca8/552E/1160/5e3c2875cda" rightExprIndex="1">
																			<children>
																				<PathElement index="1122" ident="Controller/SM1:Calculate:IfBlock1:else:_L11" name="Vote_Alog#7 o2" scadeOid="!ed/5c22/552E/1160/5e3c278e157e"/>
																			</children>
																		</PathElement>
																		<PathElement index="1123" ident="Controller/SM1:Calculate:IfBlock1:else:_L23" name="$scalar_to_vector#4" scadeOid="!ed/5cc6/552E/1160/5e3c287941f6" rightExprIndex="2">
																			<children>
																				<PathElement index="1124" ident="Controller/SM1:Calculate:IfBlock1:else:_L11" name="Vote_Alog#7 o3" scadeOid="!ed/5c22/552E/1160/5e3c278e157e"/>
																			</children>
																		</PathElement>
																	</children>
																</PathElement>
															</children>
														</PathElement>
													</rootPaths>
													<calls>
														<Call index="1125" instance="7" criterionEntity="1175" operator="877"/>
														<Call index="1126" instance="1" criterionEntity="1179" operator="128"/>
													</calls>
												</IfBranch>
											</children>
										</IfBlock>
									</children>
								</State>
								<State index="1127" name="Pollution" criterionEntity="1165">
									<paths>
										<Path index="1128" name="terminator Frequency" AC="false" criterionEntity="1183"/>
										<Path index="1129" name="terminator Stop" AC="false" criterionEntity="1184"/>
										<Path index="1130" name="Stop -&gt; terminator Stop" AC="false" criterionEntity="1184"/>
									</paths>
									<rootPaths>
										<PathElement index="1131" ident="Controller/SM1:Pollution:_" name="terminator Frequency" scadeOid="!ed/61a1/552E/1160/5e3c32894a" path="1128">
											<activationCondition>
												<ActivationCondition condition="false"/>
											</activationCondition>
											<children>
												<PathElement index="1132" ident="Controller/SM1:Pollution:_L2" name="Frequency" scadeOid="!ed/5f39/552E/1160/5e3c2d72d1b"/>
											</children>
										</PathElement>
										<PathElement index="1133" ident="Controller/SM1:Pollution:_" name="terminator Stop" scadeOid="!ed/61ac/552E/1160/5e3c328c79fa" path="1129">
											<activationCondition>
												<ActivationCondition condition="false"/>
											</activationCondition>
											<children>
												<PathElement index="1134" ident="Controller/SM1:Pollution:_L1" name="Stop" scadeOid="!ed/5f0a/552E/1160/5e3c2d51550c" path="1130"/>
											</children>
										</PathElement>
									</rootPaths>
									<children>
										<Transition index="1135" name="&lt;2&gt;" criterionEntity="1166">
											<paths>
												<Path index="1136" name="Stop -&gt; &lt;guard&gt;" AC="Frequency &gt; 0 and  not Stop" criterionEntity="1171"/>
												<Path index="1137" name="$gt#3 -&gt; &lt;guard&gt;" AC=" not Stop and  not Stop" criterionEntity="1171"/>
											</paths>
											<rootPaths>
												<PathElement index="1138" ident="Controller/SM1:Pollution:&lt;2&gt;" name="&lt;guard&gt;" scadeOid="!ed/ab45/47C/164C/5e3d8432395b">
													<activationCondition>
														<ActivationCondition condition=" not Stop"/>
													</activationCondition>
													<children>
														<PathElement index="1139" ident="MTC_guard" name="$and#2" scadeOid="!ed/ab45/47C/164C/5e3d8432395b">
															<children>
																<PathElement index="1140" ident="MTC_guard" name="$not#4" scadeOid="!ed/ab45/47C/164C/5e3d8432395b">
																	<activationCondition>
																		<ActivationCondition condition="Frequency &gt; 0"/>
																	</activationCondition>
																	<children>
																		<PathElement index="1141" ident="MTC_guard" name="Stop" scadeOid="!ed/ab45/47C/164C/5e3d8432395b" path="1136"/>
																	</children>
																</PathElement>
																<PathElement index="1142" ident="MTC_guard" name="$gt#3" scadeOid="!ed/ab45/47C/164C/5e3d8432395b" rightExprIndex="1" path="1137">
																	<activationCondition>
																		<ActivationCondition condition=" not Stop"/>
																	</activationCondition>
																	<children>
																		<PathElement index="1143" ident="MTC_guard" name="Frequency" scadeOid="!ed/ab45/47C/164C/5e3d8432395b"/>
																		<PathElement index="1144" ident="MTC_guard" name="$gt#3 i2" scadeOid="!ed/ab45/47C/164C/5e3d8432395b" rightExprIndex="1"/>
																	</children>
																</PathElement>
															</children>
														</PathElement>
													</children>
												</PathElement>
											</rootPaths>
										</Transition>
										<Transition index="1145" name="&lt;1&gt;" criterionEntity="1166">
											<paths>
												<Path index="1146" name="Stop -&gt; &lt;guard&gt;" criterionEntity="1172"/>
											</paths>
											<rootPaths>
												<PathElement index="1147" ident="Controller/SM1:Pollution:&lt;1&gt;" name="&lt;guard&gt;" scadeOid="!ed/ab6b/47C/164C/5e3d843230a9">
													<children>
														<PathElement index="1148" ident="MTC_guard" name="Stop" scadeOid="!ed/ab6b/47C/164C/5e3d843230a9" path="1146"/>
													</children>
												</PathElement>
											</rootPaths>
										</Transition>
									</children>
								</State>
								<State index="1149" name="Timer" criterionEntity="1165">
									<paths>
										<Path index="1150" name="timeout" criterionEntity="1185"/>
										<Path index="1151" name="$gte#2 -&gt; timeout" criterionEntity="1185"/>
									</paths>
									<rootPaths>
										<PathElement index="1152" ident="Controller/SM1:Timer:timeout" name="timeout" scadeOid="!ed/6164/552E/1160/5e3c323177d2" path="1150">
											<children>
												<PathElement index="1153" ident="Controller/SM1:Timer:_L11" name="$gte#2" scadeOid="!ed/6103/552E/1160/5e3c31ff7a7b" path="1151">
													<children>
														<PathElement index="1154" ident="Controller/SM1:Timer:_L8" name="$minus#4" scadeOid="!ed/60be/552E/1160/5e3c31766a3">
															<children>
																<PathElement index="1155" ident="Controller/SM1:Timer:_L7" name="Time" scadeOid="!ed/60ae/552E/1160/5e3c315f50a2"/>
																<PathElement index="1156" ident="Controller/SM1:Timer:_L10" name="Store_Time" scadeOid="!ed/60f9/552E/1160/5e3c31f122f4" rightExprIndex="1"/>
															</children>
														</PathElement>
														<PathElement index="1157" ident="Controller/SM1:Timer:_L12" name="$rdiv#1" scadeOid="!ed/6118/552E/1160/5e3c320e65f" rightExprIndex="1">
															<children>
																<PathElement index="1158" ident="Controller/SM1:Timer:_L13" name="$rdiv#1 i1" scadeOid="!ed/611f/552E/1160/5e3c3217775"/>
																<PathElement index="1159" ident="Controller/SM1:Timer:_L2" name="Frequency" scadeOid="!ed/5fbe/552E/1160/5e3c2de53b7d" rightExprIndex="1"/>
															</children>
														</PathElement>
													</children>
												</PathElement>
											</children>
										</PathElement>
									</rootPaths>
									<children>
										<Transition index="1160" name="&lt;1&gt;" criterionEntity="1166">
											<paths>
												<Path index="1161" name="timeout -&gt; &lt;guard&gt;" criterionEntity="1173"/>
											</paths>
											<rootPaths>
												<PathElement index="1162" ident="Controller/SM1:Timer:&lt;1&gt;" name="&lt;guard&gt;" scadeOid="!ed/ab89/47C/164C/5e3d8432500">
													<children>
														<PathElement index="1163" ident="MTC_guard" name="timeout" scadeOid="!ed/ab89/47C/164C/5e3d8432500" path="1161"/>
													</children>
												</PathElement>
											</rootPaths>
										</Transition>
									</children>
								</State>
							</children>
						</StateMachine>
					</controls>
				</Operator>
				<Operator index="1164" name="MTCEx::MTC_Observers::Controller_PATHS1_MTC_OBS" kind="1"/>
				<Operator index="1165" name="MTCEx::MTC_Observers::STATE_MTC_OBS" kind="1"/>
				<Operator index="1166" name="MTCEx::MTC_Observers::TRANSITION_MTC_OBS" kind="1"/>
				<Operator index="1167" name="MTCEx::MTC_Observers::Controller_PATHS2_MTC_OBS" kind="1"/>
				<Operator index="1168" name="MTCEx::MTC_Observers::Controller_PATHS3_MTC_OBS" kind="1"/>
				<Operator index="1169" name="MTCEx::MTC_Observers::Controller_PATHS4_MTC_OBS" kind="1"/>
				<Operator index="1170" name="MTCEx::MTC_Observers::Controller_PATHS5_MTC_OBS" kind="1"/>
				<Operator index="1171" name="MTCEx::MTC_Observers::Controller_PATHS6_MTC_OBS" kind="1"/>
				<Operator index="1172" name="MTCEx::MTC_Observers::Controller_PATHS7_MTC_OBS" kind="1"/>
				<Operator index="1173" name="MTCEx::MTC_Observers::Controller_PATHS8_MTC_OBS" kind="1"/>
				<Operator index="1174" name="MTCEx::MTC_Observers::Controller_PATHS9_MTC_OBS" kind="1"/>
				<Operator index="1175" name="MTCEx::MTC_Observers::Vote_Alog_111_MTC_OBS" kind="1"/>
				<Operator index="1176" name="MTCEx::MTC_Observers::Controller_PATHS10_MTC_OBS" kind="1"/>
				<Operator index="1177" name="MTCEx::MTC_Observers::Controller_PATHS11_MTC_OBS" kind="1"/>
				<Operator index="1178" name="MTCEx::MTC_Observers::Controller_PATHS12_MTC_OBS" kind="1"/>
				<Operator index="1179" name="MTCEx::MTC_Observers::Push_Table_11_MTC_OBS" kind="1"/>
				<Operator index="1180" name="MTCEx::MTC_Observers::Controller_PATHS13_MTC_OBS" kind="1"/>
				<Operator index="1181" name="MTCEx::MTC_Observers::Mean_10_Table_1_MTC_OBS" kind="1"/>
				<Operator index="1182" name="MTCEx::MTC_Observers::Controller_PATHS14_MTC_OBS" kind="1"/>
				<Operator index="1183" name="MTCEx::MTC_Observers::Controller_PATHS15_MTC_OBS" kind="1"/>
				<Operator index="1184" name="MTCEx::MTC_Observers::Controller_PATHS16_MTC_OBS" kind="1"/>
				<Operator index="1185" name="MTCEx::MTC_Observers::Controller_PATHS17_MTC_OBS" kind="1"/>
			</operators>
		</Model>
	</model>
	<criterions>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="13">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="3"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="3"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="4"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="4"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="25">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="15"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="15"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="16"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="16"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="37">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="27"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="27"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="28"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="28"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="117">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="42"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="118">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="43"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="119">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="44"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="120">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="45"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="121">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="46"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="122">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="47"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="123">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="48"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="124">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="49"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="125">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="50"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="126">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="51"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="127">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="52"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="232">
			<elements>
				<Element ident="MTC_THEN" name="Then" description="Then branch is activated." coverageElement="221"/>
				<Element ident="MTC_ELSE" name="Else" description="Else branch is activated." coverageElement="221"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="222"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="222"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="245">
			<elements>
				<Element ident="MTC_THEN" name="Then" description="Then branch is activated." coverageElement="234"/>
				<Element ident="MTC_ELSE" name="Else" description="Else branch is activated." coverageElement="234"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="235"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="235"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="258">
			<elements>
				<Element ident="MTC_THEN" name="Then" description="Then branch is activated." coverageElement="247"/>
				<Element ident="MTC_ELSE" name="Else" description="Else branch is activated." coverageElement="247"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="248"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="248"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="271">
			<elements>
				<Element ident="MTC_THEN" name="Then" description="Then branch is activated." coverageElement="260"/>
				<Element ident="MTC_ELSE" name="Else" description="Else branch is activated." coverageElement="260"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="261"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="261"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="284">
			<elements>
				<Element ident="MTC_THEN" name="Then" description="Then branch is activated." coverageElement="273"/>
				<Element ident="MTC_ELSE" name="Else" description="Else branch is activated." coverageElement="273"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="274"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="274"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="297">
			<elements>
				<Element ident="MTC_THEN" name="Then" description="Then branch is activated." coverageElement="286"/>
				<Element ident="MTC_ELSE" name="Else" description="Else branch is activated." coverageElement="286"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="287"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="287"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="691">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="579"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="579"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="692">
			<elements>
				<Element ident="MTC_ACTIVATED" name="Activated" description="The control is activated."/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="693">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="591"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="591"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="592"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="592"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="593"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="593"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="694">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="604"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="604"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="605"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="605"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="606"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="606"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="695">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="617"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="617"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="618"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="618"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="619"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="619"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="696">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="630"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="630"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="631"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="631"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="632"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="632"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="697">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="648"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="648"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="649"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="649"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="650"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="650"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="698">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="666"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="666"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="667"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="667"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="668"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="668"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="699">
			<elements>
				<Element ident="MTC_ACTIVATED" name="Activated" description="The operator is activated."/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="700">
			<elements>
				<Element ident="MTC_ACTIVATED" name="Activated" description="The operator is activated."/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="701">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="525"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="526"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="526"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="702">
			<elements>
				<Element ident="MTC_ACTIVATED" name="Activated" description="The operator is activated."/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="703">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="527"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="528"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="528"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="704">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="529"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="530"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="530"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="705">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="531"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="532"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="532"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="533"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="533"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="534"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="534"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="706">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="535"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="707">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="536"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="708">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="537"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="866">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="753"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="753"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="754"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="754"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="755"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="755"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="867">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="771"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="771"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="772"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="772"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="773"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="773"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="868">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="788"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="788"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="789"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="789"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="790"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="790"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="869">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="805"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="805"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="806"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="806"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="807"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="807"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="870">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="822"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="822"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="823"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="823"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="824"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="824"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="871">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="836"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="836"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="837"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="837"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="838"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="838"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="872">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="850"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="850"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="851"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="851"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="852"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="852"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="873">
			<elements>
				<Element ident="MTC_ACTIVATED" name="Activated" description="The operator is activated."/>
				<Element ident="MTC_Input1_CHANGED" name="Input Input1 changed" description="Input Input1 is changed."/>
				<Element ident="MTC_Input2_CHANGED" name="Input Input2 changed" description="Input Input2 is changed."/>
				<Element ident="MTC_Input3_CHANGED" name="Input Input3 changed" description="Input Input3 is changed."/>
				<Element ident="MTC_Delta_CHANGED" name="Input Delta changed" description="Input Delta is changed."/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="874">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="734"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="735"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="735"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="875">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="736"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="737"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="737"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="876">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="738"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="739"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="739"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="983">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="878"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="984">
			<elements>
				<Element ident="MTC_THEN" name="Then" description="Then branch is activated." coverageElement="879"/>
				<Element ident="MTC_ELSE" name="Else" description="Else branch is activated." coverageElement="879"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="880"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="880"/>
				<Element ident="MTC_THEN" name="Then" description="Then branch is activated." coverageElement="881"/>
				<Element ident="MTC_ELSE" name="Else" description="Else branch is activated." coverageElement="881"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="882"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="882"/>
				<Element ident="MTC_THEN" name="Then" description="Then branch is activated." coverageElement="883"/>
				<Element ident="MTC_ELSE" name="Else" description="Else branch is activated." coverageElement="883"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="884"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="884"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="985">
			<elements>
				<Element ident="MTC_ACTIVATED" name="Activated" description="The operator is activated."/>
				<Element ident="MTC_value1_CHANGED" name="Input value1 changed" description="Input value1 is changed."/>
				<Element ident="MTC_value2_CHANGED" name="Input value2 changed" description="Input value2 is changed."/>
				<Element ident="MTC_value3_CHANGED" name="Input value3 changed" description="Input value3 is changed."/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="986">
			<elements>
				<Element ident="MTC_ACTIVATED" name="Activated" description="The operator is activated."/>
				<Element ident="MTC_pH_CHANGED" name="Input pH changed" description="Input pH is changed."/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="987">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="885"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="988">
			<elements>
				<Element ident="MTC_THEN" name="Then" description="Then branch is activated." coverageElement="886"/>
				<Element ident="MTC_ELSE" name="Else" description="Else branch is activated." coverageElement="886"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="887"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="887"/>
				<Element ident="MTC_THEN" name="Then" description="Then branch is activated." coverageElement="888"/>
				<Element ident="MTC_ELSE" name="Else" description="Else branch is activated." coverageElement="888"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="889"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="889"/>
				<Element ident="MTC_THEN" name="Then" description="Then branch is activated." coverageElement="890"/>
				<Element ident="MTC_ELSE" name="Else" description="Else branch is activated." coverageElement="890"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="891"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="891"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="989">
			<elements>
				<Element ident="MTC_ACTIVATED" name="Activated" description="The operator is activated."/>
				<Element ident="MTC_temperature_CHANGED" name="Input temperature changed" description="Input temperature is changed."/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="990">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="892"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="991">
			<elements>
				<Element ident="MTC_THEN" name="Then" description="Then branch is activated." coverageElement="893"/>
				<Element ident="MTC_ELSE" name="Else" description="Else branch is activated." coverageElement="893"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="894"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="894"/>
				<Element ident="MTC_THEN" name="Then" description="Then branch is activated." coverageElement="895"/>
				<Element ident="MTC_ELSE" name="Else" description="Else branch is activated." coverageElement="895"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="896"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="896"/>
				<Element ident="MTC_THEN" name="Then" description="Then branch is activated." coverageElement="897"/>
				<Element ident="MTC_ELSE" name="Else" description="Else branch is activated." coverageElement="897"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="898"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="898"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="992">
			<elements>
				<Element ident="MTC_ACTIVATED" name="Activated" description="The operator is activated."/>
				<Element ident="MTC_Redox_CHANGED" name="Input Redox changed" description="Input Redox is changed."/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1164">
			<elements>
				<Element ident="MTC_INITIAL_LAST" name="Initial Last" description="Initial value of Last is activated." coverageElement="994"/>
				<Element ident="MTC_LAST" name="Last" description="Last is activated." coverageElement="994"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1165">
			<elements>
				<Element ident="MTC_ACTIVATED" name="Activated" description="The state is activated."/>
				<Element ident="MTC_NO_TRANS_FIRED" name="No Transition Fired" description="No transition from that state is fired."/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1166">
			<elements>
				<Element ident="MTC_FIRED" name="Fired" description="The transition is fired."/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1167">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1032"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1032"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1168">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1037"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1037"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1169">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1096"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1096"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1170">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1101"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1101"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1171">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1136"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1136"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1137"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1137"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1172">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1146"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1146"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1173">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1161"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1161"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1174">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="1005"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1006"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1006"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1175">
			<elements>
				<Element ident="MTC_ACTIVATED" name="Activated" description="The operator is activated."/>
				<Element ident="MTC_pH_Data_CHANGED" name="Input pH_Data changed" description="Input pH_Data is changed."/>
				<Element ident="MTC_Temperature_Data_CHANGED" name="Input Temperature_Data changed" description="Input Temperature_Data is changed."/>
				<Element ident="MTC_Redox_Data_CHANGED" name="Input Redox_Data changed" description="Input Redox_Data is changed."/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1176">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1007"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1007"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1177">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="1008"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1009"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1009"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1010"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1010"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1011"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1011"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1178">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1105"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1105"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1179">
			<elements>
				<Element ident="MTC_ACTIVATED" name="Activated" description="The operator is activated."/>
				<Element ident="MTC_Input1_CHANGED" name="Input Input1 changed" description="Input Input1 is changed."/>
				<Element ident="MTC_newData_CHANGED" name="Input newData changed" description="Input newData is changed."/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1180">
			<elements>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1042"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1042"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1043"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1043"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1044"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1044"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1181">
			<elements>
				<Element ident="MTC_ACTIVATED" name="Activated" description="The operator is activated."/>
				<Element ident="MTC_Input1_CHANGED" name="Input Input1 changed" description="Input Input1 is changed."/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1182">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="1045"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1183">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="1128"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1184">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="1129"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1130"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1130"/>
			</elements>
		</Criterion>
		<Criterion ident="MCDC" name="MC/DC" criterionEntity="1185">
			<elements>
				<Element ident="MTC_A" name="Activated" description="The path is activated." coverageElement="1150"/>
				<Element ident="MTC_T" name="True" description="The path is activated with True value." coverageElement="1151"/>
				<Element ident="MTC_F" name="False" description="The path is activated with False value." coverageElement="1151"/>
			</elements>
		</Criterion>
	</criterions>
</CriterionFile>
