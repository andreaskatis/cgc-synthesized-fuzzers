#include "QuadtreeConways.h"
#include <assert.h>

static int init = 0;
_Bool cvg[2];
double aeval_tmp_rand_real_12[2];
double aeval_tmp_rand_real_11[2];
double aeval_tmp_rand_real_10[2];
double aeval_tmp_rand_real_9[2];
double aeval_tmp_rand_real_8[2];
double aeval_tmp_rand_real_23[2];
double aeval_tmp_rand_real_22[2];
double aeval_tmp_rand_real_21[2];
double aeval_tmp_rand_real_20[2];
double aeval_tmp_rand_real_19[2];
double aeval_tmp_rand_real_18[2];
double aeval_tmp_rand_real_17[2];
double aeval_tmp_rand_real_16[2];
double aeval_tmp_rand_real_31[2];
double aeval_tmp_rand_real_30[2];
double aeval_tmp_rand_real_29[2];
double aeval_tmp_rand_real_28[2];
double aeval_tmp_rand_real_27[2];
double aeval_tmp_rand_real_26[2];
double aeval_tmp_rand_real_25[2];
double aeval_tmp_rand_real_24[2];
double aeval_tmp_rand_real_39[2];
double aeval_tmp_rand_real_38[2];
double aeval_tmp_rand_real_37[2];
double aeval_tmp_rand_real_36[2];
double aeval_tmp_rand_real_107[2];
double aeval_tmp_rand_real_106[2];
double aeval_tmp_rand_real_105[2];
double aeval_tmp_rand_real_104[2];
double aeval_tmp_rand_real_119[2];
double aeval_tmp_rand_real_118[2];
double aeval_tmp_rand_real_117[2];
double aeval_tmp_rand_real_116[2];
double aeval_tmp_rand_real_115[2];
double aeval_tmp_rand_real_114[2];
double aeval_tmp_rand_real_113[2];
double aeval_tmp_rand_real_112[2];
double aeval_tmp_rand_real_127[2];
double aeval_tmp_rand_real_126[2];
double aeval_tmp_rand_real_125[2];
double aeval_tmp_rand_real_124[2];
double aeval_tmp_rand_real_123[2];
double aeval_tmp_rand_real_121[2];
double aeval_tmp_rand_real_120[2];
double aeval_tmp_rand_real_135[2];
double aeval_tmp_rand_real_134[2];
double aeval_tmp_rand_real_133[2];
double aeval_tmp_rand_real_131[2];
double aeval_tmp_rand_real_130[2];
double aeval_tmp_rand_real_129[2];
double aeval_tmp_rand_real_128[2];
double aeval_tmp_rand_real_143[2];
double aeval_tmp_rand_real_142[2];
double aeval_tmp_rand_real_141[2];
double aeval_tmp_rand_real_139[2];
double aeval_tmp_rand_real_138[2];
double aeval_tmp_rand_real_136[2];
double aeval_tmp_rand_real_151[2];
double aeval_tmp_rand_real_150[2];
double aeval_tmp_rand_real_149[2];
double aeval_tmp_rand_real_148[2];
double aeval_tmp_rand_real_146[2];
double aeval_tmp_rand_real_145[2];
double aeval_tmp_rand_real_159[2];
double aeval_tmp_rand_real_158[2];
double aeval_tmp_rand_real_157[2];
double aeval_tmp_rand_real_156[2];
double aeval_tmp_rand_real_155[2];
double aeval_tmp_rand_real_154[2];
double aeval_tmp_rand_real_153[2];
double aeval_tmp_rand_real_152[2];
double aeval_tmp_rand_real_167[2];
double aeval_tmp_rand_real_166[2];
double aeval_tmp_rand_real_165[2];
double aeval_tmp_rand_real_247[2];
double aeval_tmp_rand_real_246[2];
double aeval_tmp_rand_real_245[2];
double aeval_tmp_rand_real_243[2];
double aeval_tmp_rand_real_242[2];
double aeval_tmp_rand_real_240[2];
double aeval_tmp_rand_real_255[2];
double aeval_tmp_rand_real_254[2];
double aeval_tmp_rand_real_253[2];
double aeval_tmp_rand_real_252[2];
double aeval_tmp_rand_real_251[2];
double aeval_tmp_rand_real_250[2];
double aeval_tmp_rand_real_249[2];
double aeval_tmp_rand_real_248[2];
double aeval_tmp_rand_real_263[2];
double aeval_tmp_rand_real_262[2];
double aeval_tmp_rand_real_261[2];
double aeval_tmp_rand_real_260[2];
double aeval_tmp_rand_real_259[2];
double aeval_tmp_rand_real_258[2];
double aeval_tmp_rand_real_257[2];
double aeval_tmp_rand_real_256[2];
double aeval_tmp_rand_real_271[2];
double aeval_tmp_rand_real_270[2];
double aeval_tmp_rand_real_269[2];
double aeval_tmp_rand_real_268[2];
double aeval_tmp_rand_real_267[2];
double aeval_tmp_rand_real_85[2];
double aeval_tmp_rand_real_232[2];
double aeval_tmp_rand_real_527[2];
double aeval_tmp_rand_real_84[2];
double aeval_tmp_rand_real_526[2];
double aeval_tmp_rand_real_82[2];
double aeval_tmp_rand_real_524[2];
double aeval_tmp_rand_real_80[2];
double aeval_tmp_rand_real_522[2];
double aeval_tmp_rand_real_95[2];
double aeval_tmp_rand_real_521[2];
double aeval_tmp_rand_real_94[2];
double aeval_tmp_rand_real_520[2];
double aeval_tmp_rand_real_93[2];
double aeval_tmp_rand_real_535[2];
double aeval_tmp_rand_real_92[2];
double aeval_tmp_rand_real_534[2];
double aeval_tmp_rand_real_90[2];
double aeval_tmp_rand_real_532[2];
double delta_yCoord[2];
double aeval_tmp_rand_real_89[2];
double aeval_tmp_rand_real_531[2];
double aeval_tmp_rand_real_103[2];
double aeval_tmp_rand_real_529[2];
double aeval_tmp_rand_real_102[2];
double aeval_tmp_rand_real_528[2];
double delta_mainC[2];
_Bool guarantee_delta_xCoord[2];
double aeval_tmp_rand_real_100[2];
double aeval_tmp_rand_real_542[2];
double aeval_tmp_rand_real_99[2];
double aeval_tmp_rand_real_541[2];
double aeval_tmp_rand_real_97[2];
double aeval_tmp_rand_real_539[2];
double aeval_tmp_rand_real_96[2];
double aeval_tmp_rand_real_538[2];
double aeval_tmp_rand_real_110[2];
double aeval_tmp_rand_real_536[2];
double aeval_tmp_rand_real_109[2];
double aeval_tmp_rand_real_551[2];
double aeval_tmp_rand_real_266[2];
double aeval_tmp_rand_real_549[2];
double aeval_tmp_rand_real_265[2];
double aeval_tmp_rand_real_548[2];
double aeval_tmp_rand_real_264[2];
double aeval_tmp_rand_real_547[2];
double aeval_tmp_rand_real_279[2];
double aeval_tmp_rand_real_546[2];
double aeval_tmp_rand_real_278[2];
double aeval_tmp_rand_real_545[2];
double aeval_tmp_rand_real_244[2];
double xCoord[2];
double aeval_tmp_rand_real_277[2];
double aeval_tmp_rand_real_544[2];
double aeval_tmp_rand_real_276[2];
double aeval_tmp_rand_real_559[2];
double aeval_tmp_rand_real_275[2];
double aeval_tmp_rand_real_558[2];
double aeval_tmp_rand_real_241[2];
double yCoord[2];
double aeval_tmp_rand_real_274[2];
double aeval_tmp_rand_real_557[2];
double aeval_tmp_rand_real_273[2];
double aeval_tmp_rand_real_556[2];
double aeval_tmp_rand_real_272[2];
double aeval_tmp_rand_real_555[2];
double aeval_tmp_rand_real_287[2];
double aeval_tmp_rand_real_554[2];
double aeval_tmp_rand_real_286[2];
double aeval_tmp_rand_real_553[2];
double aeval_tmp_rand_real_284[2];
double aeval_tmp_rand_real_567[2];
double aeval_tmp_rand_real_283[2];
double aeval_tmp_rand_real_566[2];
double aeval_tmp_rand_real_282[2];
double aeval_tmp_rand_real_565[2];
double aeval_tmp_rand_real_281[2];
double aeval_tmp_rand_real_564[2];
double aeval_tmp_rand_real_280[2];
double aeval_tmp_rand_real_563[2];
double aeval_tmp_rand_real_294[2];
double aeval_tmp_rand_real_561[2];
double aeval_tmp_rand_real_293[2];
double aeval_tmp_rand_real_560[2];
double aeval_tmp_rand_real_292[2];
double aeval_tmp_rand_real_575[2];
double aeval_tmp_rand_real_291[2];
double aeval_tmp_rand_real_574[2];
double aeval_tmp_rand_real_290[2];
double aeval_tmp_rand_real_573[2];
double aeval_tmp_rand_real_289[2];
double aeval_tmp_rand_real_572[2];
double aeval_tmp_rand_real_288[2];
double aeval_tmp_rand_real_571[2];
double aeval_tmp_rand_real_303[2];
double aeval_tmp_rand_real_570[2];
double aeval_tmp_rand_real_101[2];
double aeval_tmp_rand_real_543[2];
double delta_time[2];
double aeval_tmp_rand_real_72[2];
double aeval_tmp_rand_real_235[2];
double aeval_tmp_rand_real_514[2];
double aeval_tmp_rand_real_295[2];
double aeval_tmp_rand_real_562[2];
double aeval_tmp_rand_real_132[2];
double skolem_time[2];
double aeval_tmp_rand_real_76[2];
double aeval_tmp_rand_real_239[2];
double aeval_tmp_rand_real_518[2];
double aeval_tmp_rand_real_285[2];
double aeval_tmp_rand_real_552[2];
double aeval_tmp_rand_real_122[2];
_Bool guarantee_coverage_improvement_implies_delta_time[2];
double aeval_tmp_rand_real_88[2];
double aeval_tmp_rand_real_530[2];
double aeval_tmp_rand_real_137[2];
_Bool guarantee_coverage_improvement_implies_delta_yCoord[2];
double aeval_tmp_rand_real_108[2];
double aeval_tmp_rand_real_550[2];
double aeval_tmp_rand_real_79[2];
double aeval_tmp_rand_real_226[2];
double aeval_tmp_rand_real_505[2];
double aeval_tmp_rand_real_91[2];
double aeval_tmp_rand_real_533[2];
double aeval_tmp_rand_real_140[2];
_Bool guarantee_coverage_improvement_implies_delta_xCoord[2];
double aeval_tmp_rand_real_111[2];
double aeval_tmp_rand_real_537[2];
double aeval_tmp_rand_real_75[2];
double aeval_tmp_rand_real_238[2];
double aeval_tmp_rand_real_517[2];
double aeval_tmp_rand_real_77[2];
double aeval_tmp_rand_real_224[2];
double aeval_tmp_rand_real_519[2];
double aeval_tmp_rand_real_81[2];
double aeval_tmp_rand_real_523[2];
double aeval_tmp_rand_real_86[2];
double aeval_tmp_rand_real_233[2];
double aeval_tmp_rand_real_512[2];
double aeval_tmp_rand_real_83[2];
double aeval_tmp_rand_real_525[2];
double delta_xCoord[2];
double aeval_tmp_rand_real_190[2];
double aeval_tmp_rand_real_469[2];
double aeval_tmp_rand_real_637[2];
double aeval_tmp_rand_real_405[2];
double aeval_tmp_rand_real_65[2];
double aeval_tmp_rand_real_228[2];
double aeval_tmp_rand_real_507[2];
double aeval_tmp_rand_real_55[2];
double aeval_tmp_rand_real_202[2];
double aeval_tmp_rand_real_481[2];
double aeval_tmp_rand_real_417[2];
double aeval_tmp_rand_real_87[2];
double aeval_tmp_rand_real_234[2];
double aeval_tmp_rand_real_513[2];
double aeval_tmp_rand_real_74[2];
double aeval_tmp_rand_real_237[2];
double aeval_tmp_rand_real_516[2];
double aeval_tmp_rand_real_302[2];
double aeval_tmp_rand_real_569[2];
double aeval_tmp_rand_real_337[2];
double aeval_tmp_rand_real_98[2];
double aeval_tmp_rand_real_540[2];
double aeval_tmp_rand_real_147[2];
double aeval_tmp_rand_real_144[2];
double aeval_tmp_rand_real_78[2];
double aeval_tmp_rand_real_225[2];
double aeval_tmp_rand_real_504[2];
double aeval_tmp_rand_real_189[2];
double aeval_tmp_rand_real_468[2];
double aeval_tmp_rand_real_64[2];
double aeval_tmp_rand_real_227[2];
double aeval_tmp_rand_real_506[2];
double aeval_tmp_rand_real_404[2];
double aeval_tmp_rand_real_636[2];
double aeval_tmp_rand_real_73[2];
double aeval_tmp_rand_real_236[2];
double aeval_tmp_rand_real_515[2];
double aeval_tmp_rand_real_45[2];
double aeval_tmp_rand_real_192[2];
double aeval_tmp_rand_real_487[2];
double aeval_tmp_rand_real_423[2];
double mainC[2];
double aeval_tmp_rand_real_35[2];
double aeval_tmp_rand_real_198[2];
double aeval_tmp_rand_real_477[2];
double aeval_tmp_rand_real_643[2];
double aeval_tmp_rand_real_413[2];
_Bool guarantee_delta_time[2];
double aeval_tmp_rand_real_185[2];
double aeval_tmp_rand_real_464[2];
double aeval_tmp_rand_real_646[2];
double aeval_tmp_rand_real_400[2];
_Bool guarantee_delta_mainC[2];
double aeval_tmp_rand_real_188[2];
double aeval_tmp_rand_real_467[2];
double aeval_tmp_rand_real_633[2];
double aeval_tmp_rand_real_403[2];
double aeval_tmp_rand_real_309[2];
double aeval_tmp_rand_real_576[2];
double aeval_tmp_rand_real_344[2];
double aeval_tmp_rand_real_66[2];
double aeval_tmp_rand_real_229[2];
double aeval_tmp_rand_real_508[2];
double aeval_tmp_rand_real_13[2];
double aeval_tmp_rand_real_444[2];
double aeval_tmp_rand_real_67[2];
double aeval_tmp_rand_real_230[2];
double aeval_tmp_rand_real_509[2];
double aeval_tmp_rand_real_14[2];
double aeval_tmp_rand_real_445[2];
double aeval_tmp_rand_real_68[2];
double aeval_tmp_rand_real_231[2];
double aeval_tmp_rand_real_510[2];
double aeval_tmp_rand_real_15[2];
double aeval_tmp_rand_real_446[2];
double aeval_tmp_rand_real_69[2];
double aeval_tmp_rand_real_216[2];
double aeval_tmp_rand_real_511[2];
double aeval_tmp_rand_real_0[2];
double aeval_tmp_rand_real_447[2];
double aeval_tmp_rand_real_70[2];
double aeval_tmp_rand_real_217[2];
double aeval_tmp_rand_real_496[2];
double aeval_tmp_rand_real_1[2];
double aeval_tmp_rand_real_432[2];
double aeval_tmp_rand_real_71[2];
double aeval_tmp_rand_real_218[2];
double aeval_tmp_rand_real_497[2];
double aeval_tmp_rand_real_2[2];
double aeval_tmp_rand_real_433[2];
double aeval_tmp_rand_real_56[2];
double aeval_tmp_rand_real_219[2];
double aeval_tmp_rand_real_498[2];
double aeval_tmp_rand_real_3[2];
double aeval_tmp_rand_real_434[2];
double aeval_tmp_rand_real_57[2];
double aeval_tmp_rand_real_220[2];
double aeval_tmp_rand_real_499[2];
double aeval_tmp_rand_real_4[2];
double aeval_tmp_rand_real_435[2];
double aeval_tmp_rand_real_58[2];
double aeval_tmp_rand_real_221[2];
double aeval_tmp_rand_real_500[2];
double aeval_tmp_rand_real_5[2];
double aeval_tmp_rand_real_436[2];
double aeval_tmp_rand_real_59[2];
double aeval_tmp_rand_real_222[2];
double aeval_tmp_rand_real_501[2];
double aeval_tmp_rand_real_6[2];
double aeval_tmp_rand_real_437[2];
double aeval_tmp_rand_real_60[2];
double aeval_tmp_rand_real_223[2];
double aeval_tmp_rand_real_502[2];
double aeval_tmp_rand_real_7[2];
double aeval_tmp_rand_real_438[2];
double aeval_tmp_rand_real_61[2];
double aeval_tmp_rand_real_208[2];
double aeval_tmp_rand_real_503[2];
double aeval_tmp_rand_real_439[2];
double aeval_tmp_rand_real_62[2];
double aeval_tmp_rand_real_209[2];
double aeval_tmp_rand_real_488[2];
double aeval_tmp_rand_real_424[2];
double aeval_tmp_rand_real_63[2];
double aeval_tmp_rand_real_210[2];
double aeval_tmp_rand_real_489[2];
double aeval_tmp_rand_real_425[2];
double aeval_tmp_rand_real_48[2];
double aeval_tmp_rand_real_211[2];
double aeval_tmp_rand_real_490[2];
double aeval_tmp_rand_real_426[2];
double aeval_tmp_rand_real_49[2];
double aeval_tmp_rand_real_212[2];
double aeval_tmp_rand_real_491[2];
_Bool guarantee_coverage_improvement_implies_delta_mainC[2];
double aeval_tmp_rand_real_427[2];
double aeval_tmp_rand_real_50[2];
double aeval_tmp_rand_real_213[2];
double aeval_tmp_rand_real_492[2];
double aeval_tmp_rand_real_428[2];
double aeval_tmp_rand_real_51[2];
double aeval_tmp_rand_real_214[2];
double aeval_tmp_rand_real_493[2];
double aeval_tmp_rand_real_429[2];
double aeval_tmp_rand_real_52[2];
double aeval_tmp_rand_real_215[2];
double aeval_tmp_rand_real_494[2];
_Bool guarantee_delta_yCoord[2];
double aeval_tmp_rand_real_430[2];
double aeval_tmp_rand_real_53[2];
double aeval_tmp_rand_real_200[2];
double aeval_tmp_rand_real_495[2];
double aeval_tmp_rand_real_431[2];
double aeval_tmp_rand_real_54[2];
double aeval_tmp_rand_real_201[2];
double aeval_tmp_rand_real_480[2];
double aeval_tmp_rand_real_416[2];
double aeval_tmp_rand_real_40[2];
double aeval_tmp_rand_real_203[2];
double aeval_tmp_rand_real_482[2];
double aeval_tmp_rand_real_418[2];
double aeval_tmp_rand_real_41[2];
double aeval_tmp_rand_real_204[2];
double aeval_tmp_rand_real_483[2];
double aeval_tmp_rand_real_419[2];
double aeval_tmp_rand_real_42[2];
double aeval_tmp_rand_real_205[2];
double aeval_tmp_rand_real_484[2];
double aeval_tmp_rand_real_420[2];
double aeval_tmp_rand_real_43[2];
double aeval_tmp_rand_real_206[2];
double aeval_tmp_rand_real_485[2];
double aeval_tmp_rand_real_421[2];
double aeval_tmp_rand_real_44[2];
double aeval_tmp_rand_real_207[2];
double aeval_tmp_rand_real_486[2];
double aeval_tmp_rand_real_422[2];
double aeval_tmp_rand_real_46[2];
double aeval_tmp_rand_real_193[2];
double aeval_tmp_rand_real_472[2];
double aeval_tmp_rand_real_640[2];
double aeval_tmp_rand_real_408[2];
double aeval_tmp_rand_real_47[2];
double aeval_tmp_rand_real_194[2];
double aeval_tmp_rand_real_473[2];
double aeval_tmp_rand_real_641[2];
double aeval_tmp_rand_real_409[2];
double aeval_tmp_rand_real_32[2];
double aeval_tmp_rand_real_195[2];
double aeval_tmp_rand_real_474[2];
double aeval_tmp_rand_real_632[2];
double aeval_tmp_rand_real_410[2];
double aeval_tmp_rand_real_33[2];
double aeval_tmp_rand_real_196[2];
double aeval_tmp_rand_real_475[2];
double aeval_tmp_rand_real_639[2];
double aeval_tmp_rand_real_411[2];
double aeval_tmp_rand_real_34[2];
double aeval_tmp_rand_real_197[2];
double aeval_tmp_rand_real_476[2];
double aeval_tmp_rand_real_635[2];
double aeval_tmp_rand_real_412[2];
double aeval_tmp_rand_real_199[2];
double aeval_tmp_rand_real_478[2];
double aeval_tmp_rand_real_647[2];
double aeval_tmp_rand_real_414[2];
double aeval_tmp_rand_real_184[2];
double aeval_tmp_rand_real_479[2];
double aeval_tmp_rand_real_644[2];
double aeval_tmp_rand_real_415[2];
double aeval_tmp_rand_real_186[2];
double aeval_tmp_rand_real_465[2];
double aeval_tmp_rand_real_645[2];
double aeval_tmp_rand_real_401[2];
double aeval_tmp_rand_real_187[2];
double aeval_tmp_rand_real_466[2];
double aeval_tmp_rand_real_634[2];
double aeval_tmp_rand_real_402[2];
double aeval_tmp_rand_real_191[2];
double aeval_tmp_rand_real_470[2];
double aeval_tmp_rand_real_638[2];
double aeval_tmp_rand_real_406[2];
double aeval_tmp_rand_real_176[2];
double aeval_tmp_rand_real_471[2];
double aeval_tmp_rand_real_642[2];
double aeval_tmp_rand_real_407[2];
double aeval_tmp_rand_real_177[2];
double aeval_tmp_rand_real_456[2];
double aeval_tmp_rand_real_624[2];
double aeval_tmp_rand_real_392[2];
double aeval_tmp_rand_real_178[2];
double aeval_tmp_rand_real_457[2];
double aeval_tmp_rand_real_625[2];
double aeval_tmp_rand_real_393[2];
double aeval_tmp_rand_real_179[2];
double aeval_tmp_rand_real_458[2];
double aeval_tmp_rand_real_626[2];
double aeval_tmp_rand_real_394[2];
double aeval_tmp_rand_real_180[2];
double aeval_tmp_rand_real_459[2];
double aeval_tmp_rand_real_627[2];
double aeval_tmp_rand_real_395[2];
double aeval_tmp_rand_real_181[2];
double aeval_tmp_rand_real_460[2];
double aeval_tmp_rand_real_628[2];
double aeval_tmp_rand_real_396[2];
double aeval_tmp_rand_real_182[2];
double aeval_tmp_rand_real_461[2];
double aeval_tmp_rand_real_629[2];
double aeval_tmp_rand_real_397[2];
double aeval_tmp_rand_real_183[2];
double aeval_tmp_rand_real_462[2];
double aeval_tmp_rand_real_630[2];
double aeval_tmp_rand_real_398[2];
double aeval_tmp_rand_real_168[2];
double aeval_tmp_rand_real_463[2];
double aeval_tmp_rand_real_631[2];
double aeval_tmp_rand_real_399[2];
double aeval_tmp_rand_real_169[2];
double aeval_tmp_rand_real_448[2];
double aeval_tmp_rand_real_616[2];
double aeval_tmp_rand_real_384[2];
double aeval_tmp_rand_real_170[2];
double aeval_tmp_rand_real_449[2];
double aeval_tmp_rand_real_617[2];
double aeval_tmp_rand_real_385[2];
double aeval_tmp_rand_real_171[2];
double aeval_tmp_rand_real_450[2];
double aeval_tmp_rand_real_618[2];
double aeval_tmp_rand_real_386[2];
double aeval_tmp_rand_real_172[2];
double aeval_tmp_rand_real_451[2];
double aeval_tmp_rand_real_619[2];
double aeval_tmp_rand_real_387[2];
double aeval_tmp_rand_real_173[2];
double aeval_tmp_rand_real_452[2];
double aeval_tmp_rand_real_620[2];
double aeval_tmp_rand_real_388[2];
double aeval_tmp_rand_real_174[2];
double aeval_tmp_rand_real_453[2];
double aeval_tmp_rand_real_621[2];
double aeval_tmp_rand_real_338[2];
double aeval_tmp_rand_real_389[2];
double aeval_tmp_rand_real_175[2];
double aeval_tmp_rand_real_454[2];
double aeval_tmp_rand_real_622[2];
double aeval_tmp_rand_real_339[2];
double aeval_tmp_rand_real_390[2];
double aeval_tmp_rand_real_160[2];
double aeval_tmp_rand_real_455[2];
double aeval_tmp_rand_real_623[2];
double aeval_tmp_rand_real_340[2];
double aeval_tmp_rand_real_391[2];
double aeval_tmp_rand_real_161[2];
double aeval_tmp_rand_real_440[2];
double aeval_tmp_rand_real_608[2];
double aeval_tmp_rand_real_341[2];
double aeval_tmp_rand_real_376[2];
double aeval_tmp_rand_real_162[2];
double aeval_tmp_rand_real_441[2];
double aeval_tmp_rand_real_342[2];
double aeval_tmp_rand_real_609[2];
double aeval_tmp_rand_real_377[2];
double aeval_tmp_rand_real_163[2];
double aeval_tmp_rand_real_442[2];
double aeval_tmp_rand_real_343[2];
double aeval_tmp_rand_real_610[2];
double aeval_tmp_rand_real_378[2];
double aeval_tmp_rand_real_164[2];
double aeval_tmp_rand_real_443[2];
double aeval_tmp_rand_real_328[2];
double aeval_tmp_rand_real_611[2];
double aeval_tmp_rand_real_379[2];
double aeval_tmp_rand_real_329[2];
double aeval_tmp_rand_real_612[2];
double aeval_tmp_rand_real_380[2];
double aeval_tmp_rand_real_330[2];
double aeval_tmp_rand_real_613[2];
double aeval_tmp_rand_real_381[2];
double aeval_tmp_rand_real_331[2];
double aeval_tmp_rand_real_614[2];
double aeval_tmp_rand_real_382[2];
double aeval_tmp_rand_real_332[2];
double aeval_tmp_rand_real_615[2];
double aeval_tmp_rand_real_383[2];
double aeval_tmp_rand_real_333[2];
double aeval_tmp_rand_real_600[2];
double aeval_tmp_rand_real_368[2];
double aeval_tmp_rand_real_334[2];
double aeval_tmp_rand_real_601[2];
double aeval_tmp_rand_real_369[2];
double aeval_tmp_rand_real_335[2];
double aeval_tmp_rand_real_602[2];
double aeval_tmp_rand_real_370[2];
double aeval_tmp_rand_real_320[2];
double aeval_tmp_rand_real_603[2];
double aeval_tmp_rand_real_371[2];
double aeval_tmp_rand_real_321[2];
double aeval_tmp_rand_real_604[2];
double aeval_tmp_rand_real_372[2];
double aeval_tmp_rand_real_322[2];
double aeval_tmp_rand_real_605[2];
double aeval_tmp_rand_real_373[2];
double aeval_tmp_rand_real_323[2];
double aeval_tmp_rand_real_606[2];
double aeval_tmp_rand_real_374[2];
double aeval_tmp_rand_real_324[2];
double aeval_tmp_rand_real_607[2];
double aeval_tmp_rand_real_375[2];
double aeval_tmp_rand_real_325[2];
double aeval_tmp_rand_real_592[2];
double aeval_tmp_rand_real_360[2];
double aeval_tmp_rand_real_326[2];
double aeval_tmp_rand_real_593[2];
double aeval_tmp_rand_real_361[2];
double aeval_tmp_rand_real_327[2];
double aeval_tmp_rand_real_594[2];
double aeval_tmp_rand_real_362[2];
double aeval_tmp_rand_real_312[2];
double aeval_tmp_rand_real_595[2];
double aeval_tmp_rand_real_363[2];
double aeval_tmp_rand_real_313[2];
double aeval_tmp_rand_real_596[2];
double aeval_tmp_rand_real_364[2];
double aeval_tmp_rand_real_314[2];
double aeval_tmp_rand_real_597[2];
double aeval_tmp_rand_real_365[2];
double aeval_tmp_rand_real_315[2];
double aeval_tmp_rand_real_598[2];
double aeval_tmp_rand_real_366[2];
double aeval_tmp_rand_real_316[2];
double aeval_tmp_rand_real_599[2];
double aeval_tmp_rand_real_367[2];
double aeval_tmp_rand_real_317[2];
double aeval_tmp_rand_real_584[2];
double aeval_tmp_rand_real_352[2];
double aeval_tmp_rand_real_318[2];
double aeval_tmp_rand_real_585[2];
double aeval_tmp_rand_real_353[2];
double aeval_tmp_rand_real_319[2];
double aeval_tmp_rand_real_586[2];
double aeval_tmp_rand_real_354[2];
double aeval_tmp_rand_real_304[2];
double aeval_tmp_rand_real_587[2];
double aeval_tmp_rand_real_355[2];
double aeval_tmp_rand_real_305[2];
double aeval_tmp_rand_real_588[2];
double aeval_tmp_rand_real_356[2];
double aeval_tmp_rand_real_306[2];
double aeval_tmp_rand_real_589[2];
double aeval_tmp_rand_real_357[2];
double aeval_tmp_rand_real_307[2];
double aeval_tmp_rand_real_590[2];
double aeval_tmp_rand_real_358[2];
double aeval_tmp_rand_real_308[2];
double aeval_tmp_rand_real_591[2];
double aeval_tmp_rand_real_359[2];
double aeval_tmp_rand_real_310[2];
double aeval_tmp_rand_real_577[2];
double aeval_tmp_rand_real_345[2];
double aeval_tmp_rand_real_311[2];
double aeval_tmp_rand_real_578[2];
double aeval_tmp_rand_real_346[2];
double aeval_tmp_rand_real_296[2];
double aeval_tmp_rand_real_579[2];
double aeval_tmp_rand_real_347[2];
double aeval_tmp_rand_real_297[2];
double aeval_tmp_rand_real_580[2];
double aeval_tmp_rand_real_348[2];
double aeval_tmp_rand_real_298[2];
double aeval_tmp_rand_real_581[2];
double aeval_tmp_rand_real_349[2];
double aeval_tmp_rand_real_299[2];
double aeval_tmp_rand_real_582[2];
double aeval_tmp_rand_real_350[2];
double aeval_tmp_rand_real_300[2];
double aeval_tmp_rand_real_583[2];
double aeval_tmp_rand_real_351[2];
double aeval_tmp_rand_real_301[2];
double aeval_tmp_rand_real_568[2];
double aeval_tmp_rand_real_336[2];

void skolem_0() {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && ((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && ((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0);
  delta_time[0] = generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 1, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && ((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && ((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && ((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && ((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && ((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && ((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_time[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((100.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 100.0 - generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && (((!((delta_xCoord[1]) >= 0.1)) || (!((delta_xCoord[1]) <= 0.9))) && (((!((delta_yCoord[1]) >= 0.1)) || (!((delta_yCoord[1]) <= 0.9))) && ((!((delta_time[1]) >= 0.1)) || (!((delta_time[1]) <= 0.9)))))))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((5.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 5.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  xCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || ((8200.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 8200.0));
  yCoord[0] = 8200.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_xCoord[1])) || (cvg[0])) && ((((delta_xCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_yCoord[1])) || (cvg[0])) && ((((delta_yCoord[1]) <= 0.9) || (cvg[0])) && (((0.1 <= (delta_time[1])) || (cvg[0])) && (((delta_time[1]) <= 0.9) || (cvg[0]))))))))) {
  delta_mainC[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_xCoord[0] = generateRandomValue(1, 1, 0.0, 1.0);
  delta_yCoord[0] = generateRandomValue(1, 1, 0.0, 1.0);
  delta_time[0] = generateRandomValue(1, 1, 0.0, 1.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 1, 0.0, 1.0)) && (generateRandomValue(1, 1, 0.0, 1.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(1, 1, 0.0, 1.0)) && (generateRandomValue(1, 1, 0.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 1, 0.0, 1.0)) && (generateRandomValue(1, 1, 0.0, 1.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 5.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 5.0) > 5.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 5.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  xCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 8200.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 8200.0) > 8200.0));
  yCoord[0] = generateRandomValue(1, 1, 0.0, 8200.0);
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || (generateRandomValue(1, 1, 100.0, 1000.0) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || (generateRandomValue(1, 1, 100.0, 1000.0) > 1000.0));
  skolem_time[0] = generateRandomValue(1, 1, 100.0, 1000.0);
} else {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_xCoord[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  delta_yCoord[0] = generateRandomValue(0, 1, 9.0 / 10.0, 1.0);
  delta_time[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_xCoord[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_delta_yCoord[0] = (0.0 <= generateRandomValue(0, 1, 9.0 / 10.0, 1.0)) && (generateRandomValue(0, 1, 9.0 / 10.0, 1.0) <= 1.0);
  guarantee_delta_time[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 5.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_xCoord[0] = ((!((!(cvg[0])) && ((delta_xCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_xCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  xCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_yCoord[0] = ((!((!(cvg[0])) && ((delta_yCoord[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_yCoord[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 8200.0));
  yCoord[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  guarantee_coverage_improvement_implies_delta_time[0] = ((!((!(cvg[0])) && ((delta_time[1]) < 0.1))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 100.0)) && ((!((!(cvg[0])) && ((delta_time[1]) > 0.9))) || ((1000.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 1000.0));
  skolem_time[0] = 1000.0 + generateRandomValue(0, 0, 0.0, 0.0);
}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

  return;
}


void moveHistory() {
int iterator;
for (iterator = 1; iterator > 0; iterator--) {
  cvg[iterator] = cvg[iterator - 1];
  aeval_tmp_rand_real_12[iterator] = aeval_tmp_rand_real_12[iterator - 1];
  aeval_tmp_rand_real_11[iterator] = aeval_tmp_rand_real_11[iterator - 1];
  aeval_tmp_rand_real_10[iterator] = aeval_tmp_rand_real_10[iterator - 1];
  aeval_tmp_rand_real_9[iterator] = aeval_tmp_rand_real_9[iterator - 1];
  aeval_tmp_rand_real_8[iterator] = aeval_tmp_rand_real_8[iterator - 1];
  aeval_tmp_rand_real_23[iterator] = aeval_tmp_rand_real_23[iterator - 1];
  aeval_tmp_rand_real_22[iterator] = aeval_tmp_rand_real_22[iterator - 1];
  aeval_tmp_rand_real_21[iterator] = aeval_tmp_rand_real_21[iterator - 1];
  aeval_tmp_rand_real_20[iterator] = aeval_tmp_rand_real_20[iterator - 1];
  aeval_tmp_rand_real_19[iterator] = aeval_tmp_rand_real_19[iterator - 1];
  aeval_tmp_rand_real_18[iterator] = aeval_tmp_rand_real_18[iterator - 1];
  aeval_tmp_rand_real_17[iterator] = aeval_tmp_rand_real_17[iterator - 1];
  aeval_tmp_rand_real_16[iterator] = aeval_tmp_rand_real_16[iterator - 1];
  aeval_tmp_rand_real_31[iterator] = aeval_tmp_rand_real_31[iterator - 1];
  aeval_tmp_rand_real_30[iterator] = aeval_tmp_rand_real_30[iterator - 1];
  aeval_tmp_rand_real_29[iterator] = aeval_tmp_rand_real_29[iterator - 1];
  aeval_tmp_rand_real_28[iterator] = aeval_tmp_rand_real_28[iterator - 1];
  aeval_tmp_rand_real_27[iterator] = aeval_tmp_rand_real_27[iterator - 1];
  aeval_tmp_rand_real_26[iterator] = aeval_tmp_rand_real_26[iterator - 1];
  aeval_tmp_rand_real_25[iterator] = aeval_tmp_rand_real_25[iterator - 1];
  aeval_tmp_rand_real_24[iterator] = aeval_tmp_rand_real_24[iterator - 1];
  aeval_tmp_rand_real_39[iterator] = aeval_tmp_rand_real_39[iterator - 1];
  aeval_tmp_rand_real_38[iterator] = aeval_tmp_rand_real_38[iterator - 1];
  aeval_tmp_rand_real_37[iterator] = aeval_tmp_rand_real_37[iterator - 1];
  aeval_tmp_rand_real_36[iterator] = aeval_tmp_rand_real_36[iterator - 1];
  aeval_tmp_rand_real_107[iterator] = aeval_tmp_rand_real_107[iterator - 1];
  aeval_tmp_rand_real_106[iterator] = aeval_tmp_rand_real_106[iterator - 1];
  aeval_tmp_rand_real_105[iterator] = aeval_tmp_rand_real_105[iterator - 1];
  aeval_tmp_rand_real_104[iterator] = aeval_tmp_rand_real_104[iterator - 1];
  aeval_tmp_rand_real_119[iterator] = aeval_tmp_rand_real_119[iterator - 1];
  aeval_tmp_rand_real_118[iterator] = aeval_tmp_rand_real_118[iterator - 1];
  aeval_tmp_rand_real_117[iterator] = aeval_tmp_rand_real_117[iterator - 1];
  aeval_tmp_rand_real_116[iterator] = aeval_tmp_rand_real_116[iterator - 1];
  aeval_tmp_rand_real_115[iterator] = aeval_tmp_rand_real_115[iterator - 1];
  aeval_tmp_rand_real_114[iterator] = aeval_tmp_rand_real_114[iterator - 1];
  aeval_tmp_rand_real_113[iterator] = aeval_tmp_rand_real_113[iterator - 1];
  aeval_tmp_rand_real_112[iterator] = aeval_tmp_rand_real_112[iterator - 1];
  aeval_tmp_rand_real_127[iterator] = aeval_tmp_rand_real_127[iterator - 1];
  aeval_tmp_rand_real_126[iterator] = aeval_tmp_rand_real_126[iterator - 1];
  aeval_tmp_rand_real_125[iterator] = aeval_tmp_rand_real_125[iterator - 1];
  aeval_tmp_rand_real_124[iterator] = aeval_tmp_rand_real_124[iterator - 1];
  aeval_tmp_rand_real_123[iterator] = aeval_tmp_rand_real_123[iterator - 1];
  aeval_tmp_rand_real_121[iterator] = aeval_tmp_rand_real_121[iterator - 1];
  aeval_tmp_rand_real_120[iterator] = aeval_tmp_rand_real_120[iterator - 1];
  aeval_tmp_rand_real_135[iterator] = aeval_tmp_rand_real_135[iterator - 1];
  aeval_tmp_rand_real_134[iterator] = aeval_tmp_rand_real_134[iterator - 1];
  aeval_tmp_rand_real_133[iterator] = aeval_tmp_rand_real_133[iterator - 1];
  aeval_tmp_rand_real_131[iterator] = aeval_tmp_rand_real_131[iterator - 1];
  aeval_tmp_rand_real_130[iterator] = aeval_tmp_rand_real_130[iterator - 1];
  aeval_tmp_rand_real_129[iterator] = aeval_tmp_rand_real_129[iterator - 1];
  aeval_tmp_rand_real_128[iterator] = aeval_tmp_rand_real_128[iterator - 1];
  aeval_tmp_rand_real_143[iterator] = aeval_tmp_rand_real_143[iterator - 1];
  aeval_tmp_rand_real_142[iterator] = aeval_tmp_rand_real_142[iterator - 1];
  aeval_tmp_rand_real_141[iterator] = aeval_tmp_rand_real_141[iterator - 1];
  aeval_tmp_rand_real_139[iterator] = aeval_tmp_rand_real_139[iterator - 1];
  aeval_tmp_rand_real_138[iterator] = aeval_tmp_rand_real_138[iterator - 1];
  aeval_tmp_rand_real_136[iterator] = aeval_tmp_rand_real_136[iterator - 1];
  aeval_tmp_rand_real_151[iterator] = aeval_tmp_rand_real_151[iterator - 1];
  aeval_tmp_rand_real_150[iterator] = aeval_tmp_rand_real_150[iterator - 1];
  aeval_tmp_rand_real_149[iterator] = aeval_tmp_rand_real_149[iterator - 1];
  aeval_tmp_rand_real_148[iterator] = aeval_tmp_rand_real_148[iterator - 1];
  aeval_tmp_rand_real_146[iterator] = aeval_tmp_rand_real_146[iterator - 1];
  aeval_tmp_rand_real_145[iterator] = aeval_tmp_rand_real_145[iterator - 1];
  aeval_tmp_rand_real_159[iterator] = aeval_tmp_rand_real_159[iterator - 1];
  aeval_tmp_rand_real_158[iterator] = aeval_tmp_rand_real_158[iterator - 1];
  aeval_tmp_rand_real_157[iterator] = aeval_tmp_rand_real_157[iterator - 1];
  aeval_tmp_rand_real_156[iterator] = aeval_tmp_rand_real_156[iterator - 1];
  aeval_tmp_rand_real_155[iterator] = aeval_tmp_rand_real_155[iterator - 1];
  aeval_tmp_rand_real_154[iterator] = aeval_tmp_rand_real_154[iterator - 1];
  aeval_tmp_rand_real_153[iterator] = aeval_tmp_rand_real_153[iterator - 1];
  aeval_tmp_rand_real_152[iterator] = aeval_tmp_rand_real_152[iterator - 1];
  aeval_tmp_rand_real_167[iterator] = aeval_tmp_rand_real_167[iterator - 1];
  aeval_tmp_rand_real_166[iterator] = aeval_tmp_rand_real_166[iterator - 1];
  aeval_tmp_rand_real_165[iterator] = aeval_tmp_rand_real_165[iterator - 1];
  aeval_tmp_rand_real_247[iterator] = aeval_tmp_rand_real_247[iterator - 1];
  aeval_tmp_rand_real_246[iterator] = aeval_tmp_rand_real_246[iterator - 1];
  aeval_tmp_rand_real_245[iterator] = aeval_tmp_rand_real_245[iterator - 1];
  aeval_tmp_rand_real_243[iterator] = aeval_tmp_rand_real_243[iterator - 1];
  aeval_tmp_rand_real_242[iterator] = aeval_tmp_rand_real_242[iterator - 1];
  aeval_tmp_rand_real_240[iterator] = aeval_tmp_rand_real_240[iterator - 1];
  aeval_tmp_rand_real_255[iterator] = aeval_tmp_rand_real_255[iterator - 1];
  aeval_tmp_rand_real_254[iterator] = aeval_tmp_rand_real_254[iterator - 1];
  aeval_tmp_rand_real_253[iterator] = aeval_tmp_rand_real_253[iterator - 1];
  aeval_tmp_rand_real_252[iterator] = aeval_tmp_rand_real_252[iterator - 1];
  aeval_tmp_rand_real_251[iterator] = aeval_tmp_rand_real_251[iterator - 1];
  aeval_tmp_rand_real_250[iterator] = aeval_tmp_rand_real_250[iterator - 1];
  aeval_tmp_rand_real_249[iterator] = aeval_tmp_rand_real_249[iterator - 1];
  aeval_tmp_rand_real_248[iterator] = aeval_tmp_rand_real_248[iterator - 1];
  aeval_tmp_rand_real_263[iterator] = aeval_tmp_rand_real_263[iterator - 1];
  aeval_tmp_rand_real_262[iterator] = aeval_tmp_rand_real_262[iterator - 1];
  aeval_tmp_rand_real_261[iterator] = aeval_tmp_rand_real_261[iterator - 1];
  aeval_tmp_rand_real_260[iterator] = aeval_tmp_rand_real_260[iterator - 1];
  aeval_tmp_rand_real_259[iterator] = aeval_tmp_rand_real_259[iterator - 1];
  aeval_tmp_rand_real_258[iterator] = aeval_tmp_rand_real_258[iterator - 1];
  aeval_tmp_rand_real_257[iterator] = aeval_tmp_rand_real_257[iterator - 1];
  aeval_tmp_rand_real_256[iterator] = aeval_tmp_rand_real_256[iterator - 1];
  aeval_tmp_rand_real_271[iterator] = aeval_tmp_rand_real_271[iterator - 1];
  aeval_tmp_rand_real_270[iterator] = aeval_tmp_rand_real_270[iterator - 1];
  aeval_tmp_rand_real_269[iterator] = aeval_tmp_rand_real_269[iterator - 1];
  aeval_tmp_rand_real_268[iterator] = aeval_tmp_rand_real_268[iterator - 1];
  aeval_tmp_rand_real_267[iterator] = aeval_tmp_rand_real_267[iterator - 1];
  aeval_tmp_rand_real_85[iterator] = aeval_tmp_rand_real_85[iterator - 1];
  aeval_tmp_rand_real_232[iterator] = aeval_tmp_rand_real_232[iterator - 1];
  aeval_tmp_rand_real_527[iterator] = aeval_tmp_rand_real_527[iterator - 1];
  aeval_tmp_rand_real_84[iterator] = aeval_tmp_rand_real_84[iterator - 1];
  aeval_tmp_rand_real_526[iterator] = aeval_tmp_rand_real_526[iterator - 1];
  aeval_tmp_rand_real_82[iterator] = aeval_tmp_rand_real_82[iterator - 1];
  aeval_tmp_rand_real_524[iterator] = aeval_tmp_rand_real_524[iterator - 1];
  aeval_tmp_rand_real_80[iterator] = aeval_tmp_rand_real_80[iterator - 1];
  aeval_tmp_rand_real_522[iterator] = aeval_tmp_rand_real_522[iterator - 1];
  aeval_tmp_rand_real_95[iterator] = aeval_tmp_rand_real_95[iterator - 1];
  aeval_tmp_rand_real_521[iterator] = aeval_tmp_rand_real_521[iterator - 1];
  aeval_tmp_rand_real_94[iterator] = aeval_tmp_rand_real_94[iterator - 1];
  aeval_tmp_rand_real_520[iterator] = aeval_tmp_rand_real_520[iterator - 1];
  aeval_tmp_rand_real_93[iterator] = aeval_tmp_rand_real_93[iterator - 1];
  aeval_tmp_rand_real_535[iterator] = aeval_tmp_rand_real_535[iterator - 1];
  aeval_tmp_rand_real_92[iterator] = aeval_tmp_rand_real_92[iterator - 1];
  aeval_tmp_rand_real_534[iterator] = aeval_tmp_rand_real_534[iterator - 1];
  aeval_tmp_rand_real_90[iterator] = aeval_tmp_rand_real_90[iterator - 1];
  aeval_tmp_rand_real_532[iterator] = aeval_tmp_rand_real_532[iterator - 1];
  delta_yCoord[iterator] = delta_yCoord[iterator - 1];
  aeval_tmp_rand_real_89[iterator] = aeval_tmp_rand_real_89[iterator - 1];
  aeval_tmp_rand_real_531[iterator] = aeval_tmp_rand_real_531[iterator - 1];
  aeval_tmp_rand_real_103[iterator] = aeval_tmp_rand_real_103[iterator - 1];
  aeval_tmp_rand_real_529[iterator] = aeval_tmp_rand_real_529[iterator - 1];
  aeval_tmp_rand_real_102[iterator] = aeval_tmp_rand_real_102[iterator - 1];
  aeval_tmp_rand_real_528[iterator] = aeval_tmp_rand_real_528[iterator - 1];
  delta_mainC[iterator] = delta_mainC[iterator - 1];
  guarantee_delta_xCoord[iterator] = guarantee_delta_xCoord[iterator - 1];
  aeval_tmp_rand_real_100[iterator] = aeval_tmp_rand_real_100[iterator - 1];
  aeval_tmp_rand_real_542[iterator] = aeval_tmp_rand_real_542[iterator - 1];
  aeval_tmp_rand_real_99[iterator] = aeval_tmp_rand_real_99[iterator - 1];
  aeval_tmp_rand_real_541[iterator] = aeval_tmp_rand_real_541[iterator - 1];
  aeval_tmp_rand_real_97[iterator] = aeval_tmp_rand_real_97[iterator - 1];
  aeval_tmp_rand_real_539[iterator] = aeval_tmp_rand_real_539[iterator - 1];
  aeval_tmp_rand_real_96[iterator] = aeval_tmp_rand_real_96[iterator - 1];
  aeval_tmp_rand_real_538[iterator] = aeval_tmp_rand_real_538[iterator - 1];
  aeval_tmp_rand_real_110[iterator] = aeval_tmp_rand_real_110[iterator - 1];
  aeval_tmp_rand_real_536[iterator] = aeval_tmp_rand_real_536[iterator - 1];
  aeval_tmp_rand_real_109[iterator] = aeval_tmp_rand_real_109[iterator - 1];
  aeval_tmp_rand_real_551[iterator] = aeval_tmp_rand_real_551[iterator - 1];
  aeval_tmp_rand_real_266[iterator] = aeval_tmp_rand_real_266[iterator - 1];
  aeval_tmp_rand_real_549[iterator] = aeval_tmp_rand_real_549[iterator - 1];
  aeval_tmp_rand_real_265[iterator] = aeval_tmp_rand_real_265[iterator - 1];
  aeval_tmp_rand_real_548[iterator] = aeval_tmp_rand_real_548[iterator - 1];
  aeval_tmp_rand_real_264[iterator] = aeval_tmp_rand_real_264[iterator - 1];
  aeval_tmp_rand_real_547[iterator] = aeval_tmp_rand_real_547[iterator - 1];
  aeval_tmp_rand_real_279[iterator] = aeval_tmp_rand_real_279[iterator - 1];
  aeval_tmp_rand_real_546[iterator] = aeval_tmp_rand_real_546[iterator - 1];
  aeval_tmp_rand_real_278[iterator] = aeval_tmp_rand_real_278[iterator - 1];
  aeval_tmp_rand_real_545[iterator] = aeval_tmp_rand_real_545[iterator - 1];
  aeval_tmp_rand_real_244[iterator] = aeval_tmp_rand_real_244[iterator - 1];
  xCoord[iterator] = xCoord[iterator - 1];
  aeval_tmp_rand_real_277[iterator] = aeval_tmp_rand_real_277[iterator - 1];
  aeval_tmp_rand_real_544[iterator] = aeval_tmp_rand_real_544[iterator - 1];
  aeval_tmp_rand_real_276[iterator] = aeval_tmp_rand_real_276[iterator - 1];
  aeval_tmp_rand_real_559[iterator] = aeval_tmp_rand_real_559[iterator - 1];
  aeval_tmp_rand_real_275[iterator] = aeval_tmp_rand_real_275[iterator - 1];
  aeval_tmp_rand_real_558[iterator] = aeval_tmp_rand_real_558[iterator - 1];
  aeval_tmp_rand_real_241[iterator] = aeval_tmp_rand_real_241[iterator - 1];
  yCoord[iterator] = yCoord[iterator - 1];
  aeval_tmp_rand_real_274[iterator] = aeval_tmp_rand_real_274[iterator - 1];
  aeval_tmp_rand_real_557[iterator] = aeval_tmp_rand_real_557[iterator - 1];
  aeval_tmp_rand_real_273[iterator] = aeval_tmp_rand_real_273[iterator - 1];
  aeval_tmp_rand_real_556[iterator] = aeval_tmp_rand_real_556[iterator - 1];
  aeval_tmp_rand_real_272[iterator] = aeval_tmp_rand_real_272[iterator - 1];
  aeval_tmp_rand_real_555[iterator] = aeval_tmp_rand_real_555[iterator - 1];
  aeval_tmp_rand_real_287[iterator] = aeval_tmp_rand_real_287[iterator - 1];
  aeval_tmp_rand_real_554[iterator] = aeval_tmp_rand_real_554[iterator - 1];
  aeval_tmp_rand_real_286[iterator] = aeval_tmp_rand_real_286[iterator - 1];
  aeval_tmp_rand_real_553[iterator] = aeval_tmp_rand_real_553[iterator - 1];
  aeval_tmp_rand_real_284[iterator] = aeval_tmp_rand_real_284[iterator - 1];
  aeval_tmp_rand_real_567[iterator] = aeval_tmp_rand_real_567[iterator - 1];
  aeval_tmp_rand_real_283[iterator] = aeval_tmp_rand_real_283[iterator - 1];
  aeval_tmp_rand_real_566[iterator] = aeval_tmp_rand_real_566[iterator - 1];
  aeval_tmp_rand_real_282[iterator] = aeval_tmp_rand_real_282[iterator - 1];
  aeval_tmp_rand_real_565[iterator] = aeval_tmp_rand_real_565[iterator - 1];
  aeval_tmp_rand_real_281[iterator] = aeval_tmp_rand_real_281[iterator - 1];
  aeval_tmp_rand_real_564[iterator] = aeval_tmp_rand_real_564[iterator - 1];
  aeval_tmp_rand_real_280[iterator] = aeval_tmp_rand_real_280[iterator - 1];
  aeval_tmp_rand_real_563[iterator] = aeval_tmp_rand_real_563[iterator - 1];
  aeval_tmp_rand_real_294[iterator] = aeval_tmp_rand_real_294[iterator - 1];
  aeval_tmp_rand_real_561[iterator] = aeval_tmp_rand_real_561[iterator - 1];
  aeval_tmp_rand_real_293[iterator] = aeval_tmp_rand_real_293[iterator - 1];
  aeval_tmp_rand_real_560[iterator] = aeval_tmp_rand_real_560[iterator - 1];
  aeval_tmp_rand_real_292[iterator] = aeval_tmp_rand_real_292[iterator - 1];
  aeval_tmp_rand_real_575[iterator] = aeval_tmp_rand_real_575[iterator - 1];
  aeval_tmp_rand_real_291[iterator] = aeval_tmp_rand_real_291[iterator - 1];
  aeval_tmp_rand_real_574[iterator] = aeval_tmp_rand_real_574[iterator - 1];
  aeval_tmp_rand_real_290[iterator] = aeval_tmp_rand_real_290[iterator - 1];
  aeval_tmp_rand_real_573[iterator] = aeval_tmp_rand_real_573[iterator - 1];
  aeval_tmp_rand_real_289[iterator] = aeval_tmp_rand_real_289[iterator - 1];
  aeval_tmp_rand_real_572[iterator] = aeval_tmp_rand_real_572[iterator - 1];
  aeval_tmp_rand_real_288[iterator] = aeval_tmp_rand_real_288[iterator - 1];
  aeval_tmp_rand_real_571[iterator] = aeval_tmp_rand_real_571[iterator - 1];
  aeval_tmp_rand_real_303[iterator] = aeval_tmp_rand_real_303[iterator - 1];
  aeval_tmp_rand_real_570[iterator] = aeval_tmp_rand_real_570[iterator - 1];
  aeval_tmp_rand_real_101[iterator] = aeval_tmp_rand_real_101[iterator - 1];
  aeval_tmp_rand_real_543[iterator] = aeval_tmp_rand_real_543[iterator - 1];
  delta_time[iterator] = delta_time[iterator - 1];
  aeval_tmp_rand_real_72[iterator] = aeval_tmp_rand_real_72[iterator - 1];
  aeval_tmp_rand_real_235[iterator] = aeval_tmp_rand_real_235[iterator - 1];
  aeval_tmp_rand_real_514[iterator] = aeval_tmp_rand_real_514[iterator - 1];
  aeval_tmp_rand_real_295[iterator] = aeval_tmp_rand_real_295[iterator - 1];
  aeval_tmp_rand_real_562[iterator] = aeval_tmp_rand_real_562[iterator - 1];
  aeval_tmp_rand_real_132[iterator] = aeval_tmp_rand_real_132[iterator - 1];
  skolem_time[iterator] = skolem_time[iterator - 1];
  aeval_tmp_rand_real_76[iterator] = aeval_tmp_rand_real_76[iterator - 1];
  aeval_tmp_rand_real_239[iterator] = aeval_tmp_rand_real_239[iterator - 1];
  aeval_tmp_rand_real_518[iterator] = aeval_tmp_rand_real_518[iterator - 1];
  aeval_tmp_rand_real_285[iterator] = aeval_tmp_rand_real_285[iterator - 1];
  aeval_tmp_rand_real_552[iterator] = aeval_tmp_rand_real_552[iterator - 1];
  aeval_tmp_rand_real_122[iterator] = aeval_tmp_rand_real_122[iterator - 1];
  guarantee_coverage_improvement_implies_delta_time[iterator] = guarantee_coverage_improvement_implies_delta_time[iterator - 1];
  aeval_tmp_rand_real_88[iterator] = aeval_tmp_rand_real_88[iterator - 1];
  aeval_tmp_rand_real_530[iterator] = aeval_tmp_rand_real_530[iterator - 1];
  aeval_tmp_rand_real_137[iterator] = aeval_tmp_rand_real_137[iterator - 1];
  guarantee_coverage_improvement_implies_delta_yCoord[iterator] = guarantee_coverage_improvement_implies_delta_yCoord[iterator - 1];
  aeval_tmp_rand_real_108[iterator] = aeval_tmp_rand_real_108[iterator - 1];
  aeval_tmp_rand_real_550[iterator] = aeval_tmp_rand_real_550[iterator - 1];
  aeval_tmp_rand_real_79[iterator] = aeval_tmp_rand_real_79[iterator - 1];
  aeval_tmp_rand_real_226[iterator] = aeval_tmp_rand_real_226[iterator - 1];
  aeval_tmp_rand_real_505[iterator] = aeval_tmp_rand_real_505[iterator - 1];
  aeval_tmp_rand_real_91[iterator] = aeval_tmp_rand_real_91[iterator - 1];
  aeval_tmp_rand_real_533[iterator] = aeval_tmp_rand_real_533[iterator - 1];
  aeval_tmp_rand_real_140[iterator] = aeval_tmp_rand_real_140[iterator - 1];
  guarantee_coverage_improvement_implies_delta_xCoord[iterator] = guarantee_coverage_improvement_implies_delta_xCoord[iterator - 1];
  aeval_tmp_rand_real_111[iterator] = aeval_tmp_rand_real_111[iterator - 1];
  aeval_tmp_rand_real_537[iterator] = aeval_tmp_rand_real_537[iterator - 1];
  aeval_tmp_rand_real_75[iterator] = aeval_tmp_rand_real_75[iterator - 1];
  aeval_tmp_rand_real_238[iterator] = aeval_tmp_rand_real_238[iterator - 1];
  aeval_tmp_rand_real_517[iterator] = aeval_tmp_rand_real_517[iterator - 1];
  aeval_tmp_rand_real_77[iterator] = aeval_tmp_rand_real_77[iterator - 1];
  aeval_tmp_rand_real_224[iterator] = aeval_tmp_rand_real_224[iterator - 1];
  aeval_tmp_rand_real_519[iterator] = aeval_tmp_rand_real_519[iterator - 1];
  aeval_tmp_rand_real_81[iterator] = aeval_tmp_rand_real_81[iterator - 1];
  aeval_tmp_rand_real_523[iterator] = aeval_tmp_rand_real_523[iterator - 1];
  aeval_tmp_rand_real_86[iterator] = aeval_tmp_rand_real_86[iterator - 1];
  aeval_tmp_rand_real_233[iterator] = aeval_tmp_rand_real_233[iterator - 1];
  aeval_tmp_rand_real_512[iterator] = aeval_tmp_rand_real_512[iterator - 1];
  aeval_tmp_rand_real_83[iterator] = aeval_tmp_rand_real_83[iterator - 1];
  aeval_tmp_rand_real_525[iterator] = aeval_tmp_rand_real_525[iterator - 1];
  delta_xCoord[iterator] = delta_xCoord[iterator - 1];
  aeval_tmp_rand_real_190[iterator] = aeval_tmp_rand_real_190[iterator - 1];
  aeval_tmp_rand_real_469[iterator] = aeval_tmp_rand_real_469[iterator - 1];
  aeval_tmp_rand_real_637[iterator] = aeval_tmp_rand_real_637[iterator - 1];
  aeval_tmp_rand_real_405[iterator] = aeval_tmp_rand_real_405[iterator - 1];
  aeval_tmp_rand_real_65[iterator] = aeval_tmp_rand_real_65[iterator - 1];
  aeval_tmp_rand_real_228[iterator] = aeval_tmp_rand_real_228[iterator - 1];
  aeval_tmp_rand_real_507[iterator] = aeval_tmp_rand_real_507[iterator - 1];
  aeval_tmp_rand_real_55[iterator] = aeval_tmp_rand_real_55[iterator - 1];
  aeval_tmp_rand_real_202[iterator] = aeval_tmp_rand_real_202[iterator - 1];
  aeval_tmp_rand_real_481[iterator] = aeval_tmp_rand_real_481[iterator - 1];
  aeval_tmp_rand_real_417[iterator] = aeval_tmp_rand_real_417[iterator - 1];
  aeval_tmp_rand_real_87[iterator] = aeval_tmp_rand_real_87[iterator - 1];
  aeval_tmp_rand_real_234[iterator] = aeval_tmp_rand_real_234[iterator - 1];
  aeval_tmp_rand_real_513[iterator] = aeval_tmp_rand_real_513[iterator - 1];
  aeval_tmp_rand_real_74[iterator] = aeval_tmp_rand_real_74[iterator - 1];
  aeval_tmp_rand_real_237[iterator] = aeval_tmp_rand_real_237[iterator - 1];
  aeval_tmp_rand_real_516[iterator] = aeval_tmp_rand_real_516[iterator - 1];
  aeval_tmp_rand_real_302[iterator] = aeval_tmp_rand_real_302[iterator - 1];
  aeval_tmp_rand_real_569[iterator] = aeval_tmp_rand_real_569[iterator - 1];
  aeval_tmp_rand_real_337[iterator] = aeval_tmp_rand_real_337[iterator - 1];
  aeval_tmp_rand_real_98[iterator] = aeval_tmp_rand_real_98[iterator - 1];
  aeval_tmp_rand_real_540[iterator] = aeval_tmp_rand_real_540[iterator - 1];
  aeval_tmp_rand_real_147[iterator] = aeval_tmp_rand_real_147[iterator - 1];
  aeval_tmp_rand_real_144[iterator] = aeval_tmp_rand_real_144[iterator - 1];
  aeval_tmp_rand_real_78[iterator] = aeval_tmp_rand_real_78[iterator - 1];
  aeval_tmp_rand_real_225[iterator] = aeval_tmp_rand_real_225[iterator - 1];
  aeval_tmp_rand_real_504[iterator] = aeval_tmp_rand_real_504[iterator - 1];
  aeval_tmp_rand_real_189[iterator] = aeval_tmp_rand_real_189[iterator - 1];
  aeval_tmp_rand_real_468[iterator] = aeval_tmp_rand_real_468[iterator - 1];
  aeval_tmp_rand_real_64[iterator] = aeval_tmp_rand_real_64[iterator - 1];
  aeval_tmp_rand_real_227[iterator] = aeval_tmp_rand_real_227[iterator - 1];
  aeval_tmp_rand_real_506[iterator] = aeval_tmp_rand_real_506[iterator - 1];
  aeval_tmp_rand_real_404[iterator] = aeval_tmp_rand_real_404[iterator - 1];
  aeval_tmp_rand_real_636[iterator] = aeval_tmp_rand_real_636[iterator - 1];
  aeval_tmp_rand_real_73[iterator] = aeval_tmp_rand_real_73[iterator - 1];
  aeval_tmp_rand_real_236[iterator] = aeval_tmp_rand_real_236[iterator - 1];
  aeval_tmp_rand_real_515[iterator] = aeval_tmp_rand_real_515[iterator - 1];
  aeval_tmp_rand_real_45[iterator] = aeval_tmp_rand_real_45[iterator - 1];
  aeval_tmp_rand_real_192[iterator] = aeval_tmp_rand_real_192[iterator - 1];
  aeval_tmp_rand_real_487[iterator] = aeval_tmp_rand_real_487[iterator - 1];
  aeval_tmp_rand_real_423[iterator] = aeval_tmp_rand_real_423[iterator - 1];
  mainC[iterator] = mainC[iterator - 1];
  aeval_tmp_rand_real_35[iterator] = aeval_tmp_rand_real_35[iterator - 1];
  aeval_tmp_rand_real_198[iterator] = aeval_tmp_rand_real_198[iterator - 1];
  aeval_tmp_rand_real_477[iterator] = aeval_tmp_rand_real_477[iterator - 1];
  aeval_tmp_rand_real_643[iterator] = aeval_tmp_rand_real_643[iterator - 1];
  aeval_tmp_rand_real_413[iterator] = aeval_tmp_rand_real_413[iterator - 1];
  guarantee_delta_time[iterator] = guarantee_delta_time[iterator - 1];
  aeval_tmp_rand_real_185[iterator] = aeval_tmp_rand_real_185[iterator - 1];
  aeval_tmp_rand_real_464[iterator] = aeval_tmp_rand_real_464[iterator - 1];
  aeval_tmp_rand_real_646[iterator] = aeval_tmp_rand_real_646[iterator - 1];
  aeval_tmp_rand_real_400[iterator] = aeval_tmp_rand_real_400[iterator - 1];
  guarantee_delta_mainC[iterator] = guarantee_delta_mainC[iterator - 1];
  aeval_tmp_rand_real_188[iterator] = aeval_tmp_rand_real_188[iterator - 1];
  aeval_tmp_rand_real_467[iterator] = aeval_tmp_rand_real_467[iterator - 1];
  aeval_tmp_rand_real_633[iterator] = aeval_tmp_rand_real_633[iterator - 1];
  aeval_tmp_rand_real_403[iterator] = aeval_tmp_rand_real_403[iterator - 1];
  aeval_tmp_rand_real_309[iterator] = aeval_tmp_rand_real_309[iterator - 1];
  aeval_tmp_rand_real_576[iterator] = aeval_tmp_rand_real_576[iterator - 1];
  aeval_tmp_rand_real_344[iterator] = aeval_tmp_rand_real_344[iterator - 1];
  aeval_tmp_rand_real_66[iterator] = aeval_tmp_rand_real_66[iterator - 1];
  aeval_tmp_rand_real_229[iterator] = aeval_tmp_rand_real_229[iterator - 1];
  aeval_tmp_rand_real_508[iterator] = aeval_tmp_rand_real_508[iterator - 1];
  aeval_tmp_rand_real_13[iterator] = aeval_tmp_rand_real_13[iterator - 1];
  aeval_tmp_rand_real_444[iterator] = aeval_tmp_rand_real_444[iterator - 1];
  aeval_tmp_rand_real_67[iterator] = aeval_tmp_rand_real_67[iterator - 1];
  aeval_tmp_rand_real_230[iterator] = aeval_tmp_rand_real_230[iterator - 1];
  aeval_tmp_rand_real_509[iterator] = aeval_tmp_rand_real_509[iterator - 1];
  aeval_tmp_rand_real_14[iterator] = aeval_tmp_rand_real_14[iterator - 1];
  aeval_tmp_rand_real_445[iterator] = aeval_tmp_rand_real_445[iterator - 1];
  aeval_tmp_rand_real_68[iterator] = aeval_tmp_rand_real_68[iterator - 1];
  aeval_tmp_rand_real_231[iterator] = aeval_tmp_rand_real_231[iterator - 1];
  aeval_tmp_rand_real_510[iterator] = aeval_tmp_rand_real_510[iterator - 1];
  aeval_tmp_rand_real_15[iterator] = aeval_tmp_rand_real_15[iterator - 1];
  aeval_tmp_rand_real_446[iterator] = aeval_tmp_rand_real_446[iterator - 1];
  aeval_tmp_rand_real_69[iterator] = aeval_tmp_rand_real_69[iterator - 1];
  aeval_tmp_rand_real_216[iterator] = aeval_tmp_rand_real_216[iterator - 1];
  aeval_tmp_rand_real_511[iterator] = aeval_tmp_rand_real_511[iterator - 1];
  aeval_tmp_rand_real_0[iterator] = aeval_tmp_rand_real_0[iterator - 1];
  aeval_tmp_rand_real_447[iterator] = aeval_tmp_rand_real_447[iterator - 1];
  aeval_tmp_rand_real_70[iterator] = aeval_tmp_rand_real_70[iterator - 1];
  aeval_tmp_rand_real_217[iterator] = aeval_tmp_rand_real_217[iterator - 1];
  aeval_tmp_rand_real_496[iterator] = aeval_tmp_rand_real_496[iterator - 1];
  aeval_tmp_rand_real_1[iterator] = aeval_tmp_rand_real_1[iterator - 1];
  aeval_tmp_rand_real_432[iterator] = aeval_tmp_rand_real_432[iterator - 1];
  aeval_tmp_rand_real_71[iterator] = aeval_tmp_rand_real_71[iterator - 1];
  aeval_tmp_rand_real_218[iterator] = aeval_tmp_rand_real_218[iterator - 1];
  aeval_tmp_rand_real_497[iterator] = aeval_tmp_rand_real_497[iterator - 1];
  aeval_tmp_rand_real_2[iterator] = aeval_tmp_rand_real_2[iterator - 1];
  aeval_tmp_rand_real_433[iterator] = aeval_tmp_rand_real_433[iterator - 1];
  aeval_tmp_rand_real_56[iterator] = aeval_tmp_rand_real_56[iterator - 1];
  aeval_tmp_rand_real_219[iterator] = aeval_tmp_rand_real_219[iterator - 1];
  aeval_tmp_rand_real_498[iterator] = aeval_tmp_rand_real_498[iterator - 1];
  aeval_tmp_rand_real_3[iterator] = aeval_tmp_rand_real_3[iterator - 1];
  aeval_tmp_rand_real_434[iterator] = aeval_tmp_rand_real_434[iterator - 1];
  aeval_tmp_rand_real_57[iterator] = aeval_tmp_rand_real_57[iterator - 1];
  aeval_tmp_rand_real_220[iterator] = aeval_tmp_rand_real_220[iterator - 1];
  aeval_tmp_rand_real_499[iterator] = aeval_tmp_rand_real_499[iterator - 1];
  aeval_tmp_rand_real_4[iterator] = aeval_tmp_rand_real_4[iterator - 1];
  aeval_tmp_rand_real_435[iterator] = aeval_tmp_rand_real_435[iterator - 1];
  aeval_tmp_rand_real_58[iterator] = aeval_tmp_rand_real_58[iterator - 1];
  aeval_tmp_rand_real_221[iterator] = aeval_tmp_rand_real_221[iterator - 1];
  aeval_tmp_rand_real_500[iterator] = aeval_tmp_rand_real_500[iterator - 1];
  aeval_tmp_rand_real_5[iterator] = aeval_tmp_rand_real_5[iterator - 1];
  aeval_tmp_rand_real_436[iterator] = aeval_tmp_rand_real_436[iterator - 1];
  aeval_tmp_rand_real_59[iterator] = aeval_tmp_rand_real_59[iterator - 1];
  aeval_tmp_rand_real_222[iterator] = aeval_tmp_rand_real_222[iterator - 1];
  aeval_tmp_rand_real_501[iterator] = aeval_tmp_rand_real_501[iterator - 1];
  aeval_tmp_rand_real_6[iterator] = aeval_tmp_rand_real_6[iterator - 1];
  aeval_tmp_rand_real_437[iterator] = aeval_tmp_rand_real_437[iterator - 1];
  aeval_tmp_rand_real_60[iterator] = aeval_tmp_rand_real_60[iterator - 1];
  aeval_tmp_rand_real_223[iterator] = aeval_tmp_rand_real_223[iterator - 1];
  aeval_tmp_rand_real_502[iterator] = aeval_tmp_rand_real_502[iterator - 1];
  aeval_tmp_rand_real_7[iterator] = aeval_tmp_rand_real_7[iterator - 1];
  aeval_tmp_rand_real_438[iterator] = aeval_tmp_rand_real_438[iterator - 1];
  aeval_tmp_rand_real_61[iterator] = aeval_tmp_rand_real_61[iterator - 1];
  aeval_tmp_rand_real_208[iterator] = aeval_tmp_rand_real_208[iterator - 1];
  aeval_tmp_rand_real_503[iterator] = aeval_tmp_rand_real_503[iterator - 1];
  aeval_tmp_rand_real_439[iterator] = aeval_tmp_rand_real_439[iterator - 1];
  aeval_tmp_rand_real_62[iterator] = aeval_tmp_rand_real_62[iterator - 1];
  aeval_tmp_rand_real_209[iterator] = aeval_tmp_rand_real_209[iterator - 1];
  aeval_tmp_rand_real_488[iterator] = aeval_tmp_rand_real_488[iterator - 1];
  aeval_tmp_rand_real_424[iterator] = aeval_tmp_rand_real_424[iterator - 1];
  aeval_tmp_rand_real_63[iterator] = aeval_tmp_rand_real_63[iterator - 1];
  aeval_tmp_rand_real_210[iterator] = aeval_tmp_rand_real_210[iterator - 1];
  aeval_tmp_rand_real_489[iterator] = aeval_tmp_rand_real_489[iterator - 1];
  aeval_tmp_rand_real_425[iterator] = aeval_tmp_rand_real_425[iterator - 1];
  aeval_tmp_rand_real_48[iterator] = aeval_tmp_rand_real_48[iterator - 1];
  aeval_tmp_rand_real_211[iterator] = aeval_tmp_rand_real_211[iterator - 1];
  aeval_tmp_rand_real_490[iterator] = aeval_tmp_rand_real_490[iterator - 1];
  aeval_tmp_rand_real_426[iterator] = aeval_tmp_rand_real_426[iterator - 1];
  aeval_tmp_rand_real_49[iterator] = aeval_tmp_rand_real_49[iterator - 1];
  aeval_tmp_rand_real_212[iterator] = aeval_tmp_rand_real_212[iterator - 1];
  aeval_tmp_rand_real_491[iterator] = aeval_tmp_rand_real_491[iterator - 1];
  guarantee_coverage_improvement_implies_delta_mainC[iterator] = guarantee_coverage_improvement_implies_delta_mainC[iterator - 1];
  aeval_tmp_rand_real_427[iterator] = aeval_tmp_rand_real_427[iterator - 1];
  aeval_tmp_rand_real_50[iterator] = aeval_tmp_rand_real_50[iterator - 1];
  aeval_tmp_rand_real_213[iterator] = aeval_tmp_rand_real_213[iterator - 1];
  aeval_tmp_rand_real_492[iterator] = aeval_tmp_rand_real_492[iterator - 1];
  aeval_tmp_rand_real_428[iterator] = aeval_tmp_rand_real_428[iterator - 1];
  aeval_tmp_rand_real_51[iterator] = aeval_tmp_rand_real_51[iterator - 1];
  aeval_tmp_rand_real_214[iterator] = aeval_tmp_rand_real_214[iterator - 1];
  aeval_tmp_rand_real_493[iterator] = aeval_tmp_rand_real_493[iterator - 1];
  aeval_tmp_rand_real_429[iterator] = aeval_tmp_rand_real_429[iterator - 1];
  aeval_tmp_rand_real_52[iterator] = aeval_tmp_rand_real_52[iterator - 1];
  aeval_tmp_rand_real_215[iterator] = aeval_tmp_rand_real_215[iterator - 1];
  aeval_tmp_rand_real_494[iterator] = aeval_tmp_rand_real_494[iterator - 1];
  guarantee_delta_yCoord[iterator] = guarantee_delta_yCoord[iterator - 1];
  aeval_tmp_rand_real_430[iterator] = aeval_tmp_rand_real_430[iterator - 1];
  aeval_tmp_rand_real_53[iterator] = aeval_tmp_rand_real_53[iterator - 1];
  aeval_tmp_rand_real_200[iterator] = aeval_tmp_rand_real_200[iterator - 1];
  aeval_tmp_rand_real_495[iterator] = aeval_tmp_rand_real_495[iterator - 1];
  aeval_tmp_rand_real_431[iterator] = aeval_tmp_rand_real_431[iterator - 1];
  aeval_tmp_rand_real_54[iterator] = aeval_tmp_rand_real_54[iterator - 1];
  aeval_tmp_rand_real_201[iterator] = aeval_tmp_rand_real_201[iterator - 1];
  aeval_tmp_rand_real_480[iterator] = aeval_tmp_rand_real_480[iterator - 1];
  aeval_tmp_rand_real_416[iterator] = aeval_tmp_rand_real_416[iterator - 1];
  aeval_tmp_rand_real_40[iterator] = aeval_tmp_rand_real_40[iterator - 1];
  aeval_tmp_rand_real_203[iterator] = aeval_tmp_rand_real_203[iterator - 1];
  aeval_tmp_rand_real_482[iterator] = aeval_tmp_rand_real_482[iterator - 1];
  aeval_tmp_rand_real_418[iterator] = aeval_tmp_rand_real_418[iterator - 1];
  aeval_tmp_rand_real_41[iterator] = aeval_tmp_rand_real_41[iterator - 1];
  aeval_tmp_rand_real_204[iterator] = aeval_tmp_rand_real_204[iterator - 1];
  aeval_tmp_rand_real_483[iterator] = aeval_tmp_rand_real_483[iterator - 1];
  aeval_tmp_rand_real_419[iterator] = aeval_tmp_rand_real_419[iterator - 1];
  aeval_tmp_rand_real_42[iterator] = aeval_tmp_rand_real_42[iterator - 1];
  aeval_tmp_rand_real_205[iterator] = aeval_tmp_rand_real_205[iterator - 1];
  aeval_tmp_rand_real_484[iterator] = aeval_tmp_rand_real_484[iterator - 1];
  aeval_tmp_rand_real_420[iterator] = aeval_tmp_rand_real_420[iterator - 1];
  aeval_tmp_rand_real_43[iterator] = aeval_tmp_rand_real_43[iterator - 1];
  aeval_tmp_rand_real_206[iterator] = aeval_tmp_rand_real_206[iterator - 1];
  aeval_tmp_rand_real_485[iterator] = aeval_tmp_rand_real_485[iterator - 1];
  aeval_tmp_rand_real_421[iterator] = aeval_tmp_rand_real_421[iterator - 1];
  aeval_tmp_rand_real_44[iterator] = aeval_tmp_rand_real_44[iterator - 1];
  aeval_tmp_rand_real_207[iterator] = aeval_tmp_rand_real_207[iterator - 1];
  aeval_tmp_rand_real_486[iterator] = aeval_tmp_rand_real_486[iterator - 1];
  aeval_tmp_rand_real_422[iterator] = aeval_tmp_rand_real_422[iterator - 1];
  aeval_tmp_rand_real_46[iterator] = aeval_tmp_rand_real_46[iterator - 1];
  aeval_tmp_rand_real_193[iterator] = aeval_tmp_rand_real_193[iterator - 1];
  aeval_tmp_rand_real_472[iterator] = aeval_tmp_rand_real_472[iterator - 1];
  aeval_tmp_rand_real_640[iterator] = aeval_tmp_rand_real_640[iterator - 1];
  aeval_tmp_rand_real_408[iterator] = aeval_tmp_rand_real_408[iterator - 1];
  aeval_tmp_rand_real_47[iterator] = aeval_tmp_rand_real_47[iterator - 1];
  aeval_tmp_rand_real_194[iterator] = aeval_tmp_rand_real_194[iterator - 1];
  aeval_tmp_rand_real_473[iterator] = aeval_tmp_rand_real_473[iterator - 1];
  aeval_tmp_rand_real_641[iterator] = aeval_tmp_rand_real_641[iterator - 1];
  aeval_tmp_rand_real_409[iterator] = aeval_tmp_rand_real_409[iterator - 1];
  aeval_tmp_rand_real_32[iterator] = aeval_tmp_rand_real_32[iterator - 1];
  aeval_tmp_rand_real_195[iterator] = aeval_tmp_rand_real_195[iterator - 1];
  aeval_tmp_rand_real_474[iterator] = aeval_tmp_rand_real_474[iterator - 1];
  aeval_tmp_rand_real_632[iterator] = aeval_tmp_rand_real_632[iterator - 1];
  aeval_tmp_rand_real_410[iterator] = aeval_tmp_rand_real_410[iterator - 1];
  aeval_tmp_rand_real_33[iterator] = aeval_tmp_rand_real_33[iterator - 1];
  aeval_tmp_rand_real_196[iterator] = aeval_tmp_rand_real_196[iterator - 1];
  aeval_tmp_rand_real_475[iterator] = aeval_tmp_rand_real_475[iterator - 1];
  aeval_tmp_rand_real_639[iterator] = aeval_tmp_rand_real_639[iterator - 1];
  aeval_tmp_rand_real_411[iterator] = aeval_tmp_rand_real_411[iterator - 1];
  aeval_tmp_rand_real_34[iterator] = aeval_tmp_rand_real_34[iterator - 1];
  aeval_tmp_rand_real_197[iterator] = aeval_tmp_rand_real_197[iterator - 1];
  aeval_tmp_rand_real_476[iterator] = aeval_tmp_rand_real_476[iterator - 1];
  aeval_tmp_rand_real_635[iterator] = aeval_tmp_rand_real_635[iterator - 1];
  aeval_tmp_rand_real_412[iterator] = aeval_tmp_rand_real_412[iterator - 1];
  aeval_tmp_rand_real_199[iterator] = aeval_tmp_rand_real_199[iterator - 1];
  aeval_tmp_rand_real_478[iterator] = aeval_tmp_rand_real_478[iterator - 1];
  aeval_tmp_rand_real_647[iterator] = aeval_tmp_rand_real_647[iterator - 1];
  aeval_tmp_rand_real_414[iterator] = aeval_tmp_rand_real_414[iterator - 1];
  aeval_tmp_rand_real_184[iterator] = aeval_tmp_rand_real_184[iterator - 1];
  aeval_tmp_rand_real_479[iterator] = aeval_tmp_rand_real_479[iterator - 1];
  aeval_tmp_rand_real_644[iterator] = aeval_tmp_rand_real_644[iterator - 1];
  aeval_tmp_rand_real_415[iterator] = aeval_tmp_rand_real_415[iterator - 1];
  aeval_tmp_rand_real_186[iterator] = aeval_tmp_rand_real_186[iterator - 1];
  aeval_tmp_rand_real_465[iterator] = aeval_tmp_rand_real_465[iterator - 1];
  aeval_tmp_rand_real_645[iterator] = aeval_tmp_rand_real_645[iterator - 1];
  aeval_tmp_rand_real_401[iterator] = aeval_tmp_rand_real_401[iterator - 1];
  aeval_tmp_rand_real_187[iterator] = aeval_tmp_rand_real_187[iterator - 1];
  aeval_tmp_rand_real_466[iterator] = aeval_tmp_rand_real_466[iterator - 1];
  aeval_tmp_rand_real_634[iterator] = aeval_tmp_rand_real_634[iterator - 1];
  aeval_tmp_rand_real_402[iterator] = aeval_tmp_rand_real_402[iterator - 1];
  aeval_tmp_rand_real_191[iterator] = aeval_tmp_rand_real_191[iterator - 1];
  aeval_tmp_rand_real_470[iterator] = aeval_tmp_rand_real_470[iterator - 1];
  aeval_tmp_rand_real_638[iterator] = aeval_tmp_rand_real_638[iterator - 1];
  aeval_tmp_rand_real_406[iterator] = aeval_tmp_rand_real_406[iterator - 1];
  aeval_tmp_rand_real_176[iterator] = aeval_tmp_rand_real_176[iterator - 1];
  aeval_tmp_rand_real_471[iterator] = aeval_tmp_rand_real_471[iterator - 1];
  aeval_tmp_rand_real_642[iterator] = aeval_tmp_rand_real_642[iterator - 1];
  aeval_tmp_rand_real_407[iterator] = aeval_tmp_rand_real_407[iterator - 1];
  aeval_tmp_rand_real_177[iterator] = aeval_tmp_rand_real_177[iterator - 1];
  aeval_tmp_rand_real_456[iterator] = aeval_tmp_rand_real_456[iterator - 1];
  aeval_tmp_rand_real_624[iterator] = aeval_tmp_rand_real_624[iterator - 1];
  aeval_tmp_rand_real_392[iterator] = aeval_tmp_rand_real_392[iterator - 1];
  aeval_tmp_rand_real_178[iterator] = aeval_tmp_rand_real_178[iterator - 1];
  aeval_tmp_rand_real_457[iterator] = aeval_tmp_rand_real_457[iterator - 1];
  aeval_tmp_rand_real_625[iterator] = aeval_tmp_rand_real_625[iterator - 1];
  aeval_tmp_rand_real_393[iterator] = aeval_tmp_rand_real_393[iterator - 1];
  aeval_tmp_rand_real_179[iterator] = aeval_tmp_rand_real_179[iterator - 1];
  aeval_tmp_rand_real_458[iterator] = aeval_tmp_rand_real_458[iterator - 1];
  aeval_tmp_rand_real_626[iterator] = aeval_tmp_rand_real_626[iterator - 1];
  aeval_tmp_rand_real_394[iterator] = aeval_tmp_rand_real_394[iterator - 1];
  aeval_tmp_rand_real_180[iterator] = aeval_tmp_rand_real_180[iterator - 1];
  aeval_tmp_rand_real_459[iterator] = aeval_tmp_rand_real_459[iterator - 1];
  aeval_tmp_rand_real_627[iterator] = aeval_tmp_rand_real_627[iterator - 1];
  aeval_tmp_rand_real_395[iterator] = aeval_tmp_rand_real_395[iterator - 1];
  aeval_tmp_rand_real_181[iterator] = aeval_tmp_rand_real_181[iterator - 1];
  aeval_tmp_rand_real_460[iterator] = aeval_tmp_rand_real_460[iterator - 1];
  aeval_tmp_rand_real_628[iterator] = aeval_tmp_rand_real_628[iterator - 1];
  aeval_tmp_rand_real_396[iterator] = aeval_tmp_rand_real_396[iterator - 1];
  aeval_tmp_rand_real_182[iterator] = aeval_tmp_rand_real_182[iterator - 1];
  aeval_tmp_rand_real_461[iterator] = aeval_tmp_rand_real_461[iterator - 1];
  aeval_tmp_rand_real_629[iterator] = aeval_tmp_rand_real_629[iterator - 1];
  aeval_tmp_rand_real_397[iterator] = aeval_tmp_rand_real_397[iterator - 1];
  aeval_tmp_rand_real_183[iterator] = aeval_tmp_rand_real_183[iterator - 1];
  aeval_tmp_rand_real_462[iterator] = aeval_tmp_rand_real_462[iterator - 1];
  aeval_tmp_rand_real_630[iterator] = aeval_tmp_rand_real_630[iterator - 1];
  aeval_tmp_rand_real_398[iterator] = aeval_tmp_rand_real_398[iterator - 1];
  aeval_tmp_rand_real_168[iterator] = aeval_tmp_rand_real_168[iterator - 1];
  aeval_tmp_rand_real_463[iterator] = aeval_tmp_rand_real_463[iterator - 1];
  aeval_tmp_rand_real_631[iterator] = aeval_tmp_rand_real_631[iterator - 1];
  aeval_tmp_rand_real_399[iterator] = aeval_tmp_rand_real_399[iterator - 1];
  aeval_tmp_rand_real_169[iterator] = aeval_tmp_rand_real_169[iterator - 1];
  aeval_tmp_rand_real_448[iterator] = aeval_tmp_rand_real_448[iterator - 1];
  aeval_tmp_rand_real_616[iterator] = aeval_tmp_rand_real_616[iterator - 1];
  aeval_tmp_rand_real_384[iterator] = aeval_tmp_rand_real_384[iterator - 1];
  aeval_tmp_rand_real_170[iterator] = aeval_tmp_rand_real_170[iterator - 1];
  aeval_tmp_rand_real_449[iterator] = aeval_tmp_rand_real_449[iterator - 1];
  aeval_tmp_rand_real_617[iterator] = aeval_tmp_rand_real_617[iterator - 1];
  aeval_tmp_rand_real_385[iterator] = aeval_tmp_rand_real_385[iterator - 1];
  aeval_tmp_rand_real_171[iterator] = aeval_tmp_rand_real_171[iterator - 1];
  aeval_tmp_rand_real_450[iterator] = aeval_tmp_rand_real_450[iterator - 1];
  aeval_tmp_rand_real_618[iterator] = aeval_tmp_rand_real_618[iterator - 1];
  aeval_tmp_rand_real_386[iterator] = aeval_tmp_rand_real_386[iterator - 1];
  aeval_tmp_rand_real_172[iterator] = aeval_tmp_rand_real_172[iterator - 1];
  aeval_tmp_rand_real_451[iterator] = aeval_tmp_rand_real_451[iterator - 1];
  aeval_tmp_rand_real_619[iterator] = aeval_tmp_rand_real_619[iterator - 1];
  aeval_tmp_rand_real_387[iterator] = aeval_tmp_rand_real_387[iterator - 1];
  aeval_tmp_rand_real_173[iterator] = aeval_tmp_rand_real_173[iterator - 1];
  aeval_tmp_rand_real_452[iterator] = aeval_tmp_rand_real_452[iterator - 1];
  aeval_tmp_rand_real_620[iterator] = aeval_tmp_rand_real_620[iterator - 1];
  aeval_tmp_rand_real_388[iterator] = aeval_tmp_rand_real_388[iterator - 1];
  aeval_tmp_rand_real_174[iterator] = aeval_tmp_rand_real_174[iterator - 1];
  aeval_tmp_rand_real_453[iterator] = aeval_tmp_rand_real_453[iterator - 1];
  aeval_tmp_rand_real_621[iterator] = aeval_tmp_rand_real_621[iterator - 1];
  aeval_tmp_rand_real_338[iterator] = aeval_tmp_rand_real_338[iterator - 1];
  aeval_tmp_rand_real_389[iterator] = aeval_tmp_rand_real_389[iterator - 1];
  aeval_tmp_rand_real_175[iterator] = aeval_tmp_rand_real_175[iterator - 1];
  aeval_tmp_rand_real_454[iterator] = aeval_tmp_rand_real_454[iterator - 1];
  aeval_tmp_rand_real_622[iterator] = aeval_tmp_rand_real_622[iterator - 1];
  aeval_tmp_rand_real_339[iterator] = aeval_tmp_rand_real_339[iterator - 1];
  aeval_tmp_rand_real_390[iterator] = aeval_tmp_rand_real_390[iterator - 1];
  aeval_tmp_rand_real_160[iterator] = aeval_tmp_rand_real_160[iterator - 1];
  aeval_tmp_rand_real_455[iterator] = aeval_tmp_rand_real_455[iterator - 1];
  aeval_tmp_rand_real_623[iterator] = aeval_tmp_rand_real_623[iterator - 1];
  aeval_tmp_rand_real_340[iterator] = aeval_tmp_rand_real_340[iterator - 1];
  aeval_tmp_rand_real_391[iterator] = aeval_tmp_rand_real_391[iterator - 1];
  aeval_tmp_rand_real_161[iterator] = aeval_tmp_rand_real_161[iterator - 1];
  aeval_tmp_rand_real_440[iterator] = aeval_tmp_rand_real_440[iterator - 1];
  aeval_tmp_rand_real_608[iterator] = aeval_tmp_rand_real_608[iterator - 1];
  aeval_tmp_rand_real_341[iterator] = aeval_tmp_rand_real_341[iterator - 1];
  aeval_tmp_rand_real_376[iterator] = aeval_tmp_rand_real_376[iterator - 1];
  aeval_tmp_rand_real_162[iterator] = aeval_tmp_rand_real_162[iterator - 1];
  aeval_tmp_rand_real_441[iterator] = aeval_tmp_rand_real_441[iterator - 1];
  aeval_tmp_rand_real_342[iterator] = aeval_tmp_rand_real_342[iterator - 1];
  aeval_tmp_rand_real_609[iterator] = aeval_tmp_rand_real_609[iterator - 1];
  aeval_tmp_rand_real_377[iterator] = aeval_tmp_rand_real_377[iterator - 1];
  aeval_tmp_rand_real_163[iterator] = aeval_tmp_rand_real_163[iterator - 1];
  aeval_tmp_rand_real_442[iterator] = aeval_tmp_rand_real_442[iterator - 1];
  aeval_tmp_rand_real_343[iterator] = aeval_tmp_rand_real_343[iterator - 1];
  aeval_tmp_rand_real_610[iterator] = aeval_tmp_rand_real_610[iterator - 1];
  aeval_tmp_rand_real_378[iterator] = aeval_tmp_rand_real_378[iterator - 1];
  aeval_tmp_rand_real_164[iterator] = aeval_tmp_rand_real_164[iterator - 1];
  aeval_tmp_rand_real_443[iterator] = aeval_tmp_rand_real_443[iterator - 1];
  aeval_tmp_rand_real_328[iterator] = aeval_tmp_rand_real_328[iterator - 1];
  aeval_tmp_rand_real_611[iterator] = aeval_tmp_rand_real_611[iterator - 1];
  aeval_tmp_rand_real_379[iterator] = aeval_tmp_rand_real_379[iterator - 1];
  aeval_tmp_rand_real_329[iterator] = aeval_tmp_rand_real_329[iterator - 1];
  aeval_tmp_rand_real_612[iterator] = aeval_tmp_rand_real_612[iterator - 1];
  aeval_tmp_rand_real_380[iterator] = aeval_tmp_rand_real_380[iterator - 1];
  aeval_tmp_rand_real_330[iterator] = aeval_tmp_rand_real_330[iterator - 1];
  aeval_tmp_rand_real_613[iterator] = aeval_tmp_rand_real_613[iterator - 1];
  aeval_tmp_rand_real_381[iterator] = aeval_tmp_rand_real_381[iterator - 1];
  aeval_tmp_rand_real_331[iterator] = aeval_tmp_rand_real_331[iterator - 1];
  aeval_tmp_rand_real_614[iterator] = aeval_tmp_rand_real_614[iterator - 1];
  aeval_tmp_rand_real_382[iterator] = aeval_tmp_rand_real_382[iterator - 1];
  aeval_tmp_rand_real_332[iterator] = aeval_tmp_rand_real_332[iterator - 1];
  aeval_tmp_rand_real_615[iterator] = aeval_tmp_rand_real_615[iterator - 1];
  aeval_tmp_rand_real_383[iterator] = aeval_tmp_rand_real_383[iterator - 1];
  aeval_tmp_rand_real_333[iterator] = aeval_tmp_rand_real_333[iterator - 1];
  aeval_tmp_rand_real_600[iterator] = aeval_tmp_rand_real_600[iterator - 1];
  aeval_tmp_rand_real_368[iterator] = aeval_tmp_rand_real_368[iterator - 1];
  aeval_tmp_rand_real_334[iterator] = aeval_tmp_rand_real_334[iterator - 1];
  aeval_tmp_rand_real_601[iterator] = aeval_tmp_rand_real_601[iterator - 1];
  aeval_tmp_rand_real_369[iterator] = aeval_tmp_rand_real_369[iterator - 1];
  aeval_tmp_rand_real_335[iterator] = aeval_tmp_rand_real_335[iterator - 1];
  aeval_tmp_rand_real_602[iterator] = aeval_tmp_rand_real_602[iterator - 1];
  aeval_tmp_rand_real_370[iterator] = aeval_tmp_rand_real_370[iterator - 1];
  aeval_tmp_rand_real_320[iterator] = aeval_tmp_rand_real_320[iterator - 1];
  aeval_tmp_rand_real_603[iterator] = aeval_tmp_rand_real_603[iterator - 1];
  aeval_tmp_rand_real_371[iterator] = aeval_tmp_rand_real_371[iterator - 1];
  aeval_tmp_rand_real_321[iterator] = aeval_tmp_rand_real_321[iterator - 1];
  aeval_tmp_rand_real_604[iterator] = aeval_tmp_rand_real_604[iterator - 1];
  aeval_tmp_rand_real_372[iterator] = aeval_tmp_rand_real_372[iterator - 1];
  aeval_tmp_rand_real_322[iterator] = aeval_tmp_rand_real_322[iterator - 1];
  aeval_tmp_rand_real_605[iterator] = aeval_tmp_rand_real_605[iterator - 1];
  aeval_tmp_rand_real_373[iterator] = aeval_tmp_rand_real_373[iterator - 1];
  aeval_tmp_rand_real_323[iterator] = aeval_tmp_rand_real_323[iterator - 1];
  aeval_tmp_rand_real_606[iterator] = aeval_tmp_rand_real_606[iterator - 1];
  aeval_tmp_rand_real_374[iterator] = aeval_tmp_rand_real_374[iterator - 1];
  aeval_tmp_rand_real_324[iterator] = aeval_tmp_rand_real_324[iterator - 1];
  aeval_tmp_rand_real_607[iterator] = aeval_tmp_rand_real_607[iterator - 1];
  aeval_tmp_rand_real_375[iterator] = aeval_tmp_rand_real_375[iterator - 1];
  aeval_tmp_rand_real_325[iterator] = aeval_tmp_rand_real_325[iterator - 1];
  aeval_tmp_rand_real_592[iterator] = aeval_tmp_rand_real_592[iterator - 1];
  aeval_tmp_rand_real_360[iterator] = aeval_tmp_rand_real_360[iterator - 1];
  aeval_tmp_rand_real_326[iterator] = aeval_tmp_rand_real_326[iterator - 1];
  aeval_tmp_rand_real_593[iterator] = aeval_tmp_rand_real_593[iterator - 1];
  aeval_tmp_rand_real_361[iterator] = aeval_tmp_rand_real_361[iterator - 1];
  aeval_tmp_rand_real_327[iterator] = aeval_tmp_rand_real_327[iterator - 1];
  aeval_tmp_rand_real_594[iterator] = aeval_tmp_rand_real_594[iterator - 1];
  aeval_tmp_rand_real_362[iterator] = aeval_tmp_rand_real_362[iterator - 1];
  aeval_tmp_rand_real_312[iterator] = aeval_tmp_rand_real_312[iterator - 1];
  aeval_tmp_rand_real_595[iterator] = aeval_tmp_rand_real_595[iterator - 1];
  aeval_tmp_rand_real_363[iterator] = aeval_tmp_rand_real_363[iterator - 1];
  aeval_tmp_rand_real_313[iterator] = aeval_tmp_rand_real_313[iterator - 1];
  aeval_tmp_rand_real_596[iterator] = aeval_tmp_rand_real_596[iterator - 1];
  aeval_tmp_rand_real_364[iterator] = aeval_tmp_rand_real_364[iterator - 1];
  aeval_tmp_rand_real_314[iterator] = aeval_tmp_rand_real_314[iterator - 1];
  aeval_tmp_rand_real_597[iterator] = aeval_tmp_rand_real_597[iterator - 1];
  aeval_tmp_rand_real_365[iterator] = aeval_tmp_rand_real_365[iterator - 1];
  aeval_tmp_rand_real_315[iterator] = aeval_tmp_rand_real_315[iterator - 1];
  aeval_tmp_rand_real_598[iterator] = aeval_tmp_rand_real_598[iterator - 1];
  aeval_tmp_rand_real_366[iterator] = aeval_tmp_rand_real_366[iterator - 1];
  aeval_tmp_rand_real_316[iterator] = aeval_tmp_rand_real_316[iterator - 1];
  aeval_tmp_rand_real_599[iterator] = aeval_tmp_rand_real_599[iterator - 1];
  aeval_tmp_rand_real_367[iterator] = aeval_tmp_rand_real_367[iterator - 1];
  aeval_tmp_rand_real_317[iterator] = aeval_tmp_rand_real_317[iterator - 1];
  aeval_tmp_rand_real_584[iterator] = aeval_tmp_rand_real_584[iterator - 1];
  aeval_tmp_rand_real_352[iterator] = aeval_tmp_rand_real_352[iterator - 1];
  aeval_tmp_rand_real_318[iterator] = aeval_tmp_rand_real_318[iterator - 1];
  aeval_tmp_rand_real_585[iterator] = aeval_tmp_rand_real_585[iterator - 1];
  aeval_tmp_rand_real_353[iterator] = aeval_tmp_rand_real_353[iterator - 1];
  aeval_tmp_rand_real_319[iterator] = aeval_tmp_rand_real_319[iterator - 1];
  aeval_tmp_rand_real_586[iterator] = aeval_tmp_rand_real_586[iterator - 1];
  aeval_tmp_rand_real_354[iterator] = aeval_tmp_rand_real_354[iterator - 1];
  aeval_tmp_rand_real_304[iterator] = aeval_tmp_rand_real_304[iterator - 1];
  aeval_tmp_rand_real_587[iterator] = aeval_tmp_rand_real_587[iterator - 1];
  aeval_tmp_rand_real_355[iterator] = aeval_tmp_rand_real_355[iterator - 1];
  aeval_tmp_rand_real_305[iterator] = aeval_tmp_rand_real_305[iterator - 1];
  aeval_tmp_rand_real_588[iterator] = aeval_tmp_rand_real_588[iterator - 1];
  aeval_tmp_rand_real_356[iterator] = aeval_tmp_rand_real_356[iterator - 1];
  aeval_tmp_rand_real_306[iterator] = aeval_tmp_rand_real_306[iterator - 1];
  aeval_tmp_rand_real_589[iterator] = aeval_tmp_rand_real_589[iterator - 1];
  aeval_tmp_rand_real_357[iterator] = aeval_tmp_rand_real_357[iterator - 1];
  aeval_tmp_rand_real_307[iterator] = aeval_tmp_rand_real_307[iterator - 1];
  aeval_tmp_rand_real_590[iterator] = aeval_tmp_rand_real_590[iterator - 1];
  aeval_tmp_rand_real_358[iterator] = aeval_tmp_rand_real_358[iterator - 1];
  aeval_tmp_rand_real_308[iterator] = aeval_tmp_rand_real_308[iterator - 1];
  aeval_tmp_rand_real_591[iterator] = aeval_tmp_rand_real_591[iterator - 1];
  aeval_tmp_rand_real_359[iterator] = aeval_tmp_rand_real_359[iterator - 1];
  aeval_tmp_rand_real_310[iterator] = aeval_tmp_rand_real_310[iterator - 1];
  aeval_tmp_rand_real_577[iterator] = aeval_tmp_rand_real_577[iterator - 1];
  aeval_tmp_rand_real_345[iterator] = aeval_tmp_rand_real_345[iterator - 1];
  aeval_tmp_rand_real_311[iterator] = aeval_tmp_rand_real_311[iterator - 1];
  aeval_tmp_rand_real_578[iterator] = aeval_tmp_rand_real_578[iterator - 1];
  aeval_tmp_rand_real_346[iterator] = aeval_tmp_rand_real_346[iterator - 1];
  aeval_tmp_rand_real_296[iterator] = aeval_tmp_rand_real_296[iterator - 1];
  aeval_tmp_rand_real_579[iterator] = aeval_tmp_rand_real_579[iterator - 1];
  aeval_tmp_rand_real_347[iterator] = aeval_tmp_rand_real_347[iterator - 1];
  aeval_tmp_rand_real_297[iterator] = aeval_tmp_rand_real_297[iterator - 1];
  aeval_tmp_rand_real_580[iterator] = aeval_tmp_rand_real_580[iterator - 1];
  aeval_tmp_rand_real_348[iterator] = aeval_tmp_rand_real_348[iterator - 1];
  aeval_tmp_rand_real_298[iterator] = aeval_tmp_rand_real_298[iterator - 1];
  aeval_tmp_rand_real_581[iterator] = aeval_tmp_rand_real_581[iterator - 1];
  aeval_tmp_rand_real_349[iterator] = aeval_tmp_rand_real_349[iterator - 1];
  aeval_tmp_rand_real_299[iterator] = aeval_tmp_rand_real_299[iterator - 1];
  aeval_tmp_rand_real_582[iterator] = aeval_tmp_rand_real_582[iterator - 1];
  aeval_tmp_rand_real_350[iterator] = aeval_tmp_rand_real_350[iterator - 1];
  aeval_tmp_rand_real_300[iterator] = aeval_tmp_rand_real_300[iterator - 1];
  aeval_tmp_rand_real_583[iterator] = aeval_tmp_rand_real_583[iterator - 1];
  aeval_tmp_rand_real_351[iterator] = aeval_tmp_rand_real_351[iterator - 1];
  aeval_tmp_rand_real_301[iterator] = aeval_tmp_rand_real_301[iterator - 1];
  aeval_tmp_rand_real_568[iterator] = aeval_tmp_rand_real_568[iterator - 1];
  aeval_tmp_rand_real_336[iterator] = aeval_tmp_rand_real_336[iterator - 1];
}
return;
}


void updateFunction() {
if (init == 0) {
  skolem_0();
  init = init + 1;
  moveHistory();
} else {
  skolem_0();
  moveHistory();
}
return;
}


