//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ChatKotlin21PerformanceTracerImpl_h
#define _TtC10ChatKotlin21PerformanceTracerImpl_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainPerformanceTracer-Protocol.h"

@class DispatchQueue, _$s2os12OSSignposterVMn, _$sSD -> _$s7XKotlin25PerformanceTracerSectionsOMn _$s2os23OSSignpostIntervalStateCMn, _TtCs12_SwiftObject;

@interface ChatKotlin.PerformanceTracerImpl : Swift._SwiftObject <Subsystem_ios_iosArm64_mainPerformanceTracer> { // (Swift)
    /* instance variables */
    nominal type descriptor for os.OSSignposter signposter;
    DispatchQueue accessQueue;
    Swift.Dictionary -> nominal type descriptor for XKotlin.PerformanceTracerSections nominal type descriptor for os.OSSignpostIntervalState states;
}

/* instance methods */
- (void)beginAsyncSectionSection:(id)section uuid:(int)uuid;
- (void)endAsyncSectionSection:(id)section uuid:(int)uuid;
- (_Bool)isEnabled;

@end

#endif /* _TtC10ChatKotlin21PerformanceTracerImpl_h */
