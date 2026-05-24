topic "EscPainter";
[H6;0 $$1,0#05600065144404261032431302351956:begin]
[i448;a25;kKO9;2 $$2,0#37138531426314131252341829483370:codeitem]
[l288;2 $$3,0#27521748481378242620020725143825:desc]
[0 $$4,0#96390100711032703541132217272105:end]
[ $$0,0#00000000000000000000000000000000:Default]
[{_} 
[ {{10000t/25b/25@3 [s0;%% [*@(229)4 Painter library for ESC]]}}&]
[s3;%% &]
[s2;:Upp`:`:PainterLib`(ArrayMap`&`): [@(0.0.255) void] [* PainterLib](ArrayMap<String, 
EscValue>[@(0.0.255) `&] [*@3 global])&]
[s3;%% Initializes the [^topic`:`/`/Esc`/srcdoc`/Esc`_en`-us`#1^ Esc] 
programming environment for [^topic`:`/`/Painter`/src`/Painter`_en`-us`#Upp`:`:Painter`:`:Move`(const Upp`:`:Pointf`&`,bool`)^ P
ainter] operations. It automatically binds the underlying [^topic`:`/`/Painter`/src`/Painter`_en`-us`#Upp`:`:Painter`:`:Move`(const Upp`:`:Pointf`&`,bool`)^ P
ainter] map classes, type conversions, and necessary geometric 
utility macros into the specified [%-*@3 global] environment.&]
[s4; &]
[s1; &]
[s2;:Upp`:`:EscPaint`(ArrayMap`&`,Upp`:`:Painter`&`,Upp`:`:Size`): [@(0.0.255) void] 
[* EscPaint](ArrayMap<String, EscValue>[@(0.0.255) `&] [*@3 global], 
Painter[@(0.0.255) `&] [*@3 w], Size [*@3 sz])&]
[s3; [%% Executes a drawing script onto a specified target. It locates 
and executes an ][%%^topic`:`/`/Esc`/srcdoc`/Esc`_en`-us`#1^ Esc][%%  
lambda function named ][%%@(0.255.0) Paint()][%%  from the provided 
][*@3 global][%%  environment, rendering the output directly to the 
given Painter instance ][*@3 w][%% , bounded by the specified size 
][*@3 sz]&]
[s4; &]
[s1; &]
[s2;:Upp`:`:EscPaint`(ArrayMap`&`,Upp`:`:Painter`&`,int`,int`): [@(0.0.255) void] 
[* EscPaint](ArrayMap<String, EscValue>[@(0.0.255) `&] [*@3 global], 
Painter[@(0.0.255) `&] [*@3 w], [@(0.0.255) int] [*@3 cx], [@(0.0.255) int] 
[*@3 cy])&]
[s3;%% Executes a drawing script onto a specified target. It locates 
and executes an [^topic`:`/`/Esc`/srcdoc`/Esc`_en`-us`#1^ Esc] 
lambda function named [@(0.255.0) Paint()] from the provided [%-*@3 global] 
environment, rendering the output directly to the given Painter 
instance [%-*@3 w], bounded by the width [%-*@3 cx] and height [%-*@3 cy].&]
[s4; &]
[s1; &]
[s2;:Upp`:`:EscPaintImage`(ArrayMap`&`,Upp`:`:Size`): Image [* EscPaintImage](ArrayMap<
String, EscValue>[@(0.0.255) `&] [*@3 global], Size [*@3 sz])&]
[s3;%% Convenience function for off`-screen rendering. It automatically 
instantiates an ImagePainter of size [%-*@3 sz], executes the [@(0.255.0) Paint()] 
lambda from the [%-*@3 global] environment, and returns the finalized 
image.&]
[s4; &]
[s1; &]
[s2;:Upp`:`:EscPaintImage`(ArrayMap`&`,int`,int`): Image [* EscPaintImage](ArrayMap<Str
ing, EscValue>[@(0.0.255) `&] [*@3 global], [@(0.0.255) int] [*@3 cx], 
[@(0.0.255) int] [*@3 cy])&]
[s3;%% Convenience function for off`-screen rendering. It automatically 
instantiates an ImagePainter with width [%-*@3 cx] and height [%-*@3 cy], 
executes the [@(0.255.0) Paint()] lambda from the [%-*@3 global] 
environment, and returns the finalized image.&]
[s4; &]
[s1; &]
[s2;:Upp`:`:EscPaintImage`(ArrayMap`&`,const Upp`:`:String`&`,Upp`:`:Size`): Image 
[* EscPaintImage](ArrayMap<String, EscValue>[@(0.0.255) `&] [*@3 global], 
[@(0.0.255) const] String[@(0.0.255) `&] [*@3 script], Size [*@3 sz])&]
[s3;%% All`-in`-one execution helper for off`-screen rendering from 
source code. It first parses the provided [^topic`:`/`/Esc`/srcdoc`/Esc`_en`-us`#1^ E
sc] [%-*@3 script] string into the [%-*@3 global] environment, then 
automatically instantiates an ImagePainter of size [%-*@3 sz] , 
executes the newly loaded [@(0.255.0) Paint()] lambda, and returns 
the finalized image.&]
[s4; &]
[s1; &]
[s2;:Upp`:`:EscPaintImage`(ArrayMap`&`,const Upp`:`:String`&`,int`,int`): Image 
[* EscPaintImage](ArrayMap<String, EscValue>[@(0.0.255) `&] [*@3 global], 
[@(0.0.255) const] String[@(0.0.255) `&] [*@3 script], [@(0.0.255) int] 
[*@3 cx], [@(0.0.255) int] [*@3 cy])&]
[s3;%% All`-in`-one execution helper for off`-screen rendering from 
source code. It first parses the provided [^topic`:`/`/Esc`/srcdoc`/Esc`_en`-us`#1^ E
sc] [%-*@3 script] string into the [%-*@3 global] environment, then 
automatically instantiates an ImagePainter width [%-*@3 cx] and 
height [%-*@3 cy], executes the newly loaded [@(0.255.0) Paint()] 
lambda, and returns the finalized image.&]
[s4; &]
[s0;%% ]]