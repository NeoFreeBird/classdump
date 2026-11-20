//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNDynamicColorArraySetterAdapter_h
#define TFNDynamicColorArraySetterAdapter_h
@import Foundation;

#include "TFNDynamicColorSetterAdapter-Protocol.h"

@class NSObject, NSString;

@interface TFNDynamicColorArraySetterAdapter : NSObject <TFNDynamicColorSetterAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedSetterAdapter;

/* instance methods */
- (id)blockRecordingDynamicColorSetter:(SEL)setter withRecorder:(id /* block */)recorder;
- (id)dynamicColorSetterArguments:(id)arguments forObject:(id)object;
- (void)invokeDynamicColorSetter:(void * /* function */)setter forObject:(id)object withSelector:(SEL)selector arguments:(id)arguments;
- (_Bool)dynamicColorSetterWithArguments:(id)arguments shouldOverwriteSetterWithArguments:(id)arguments;
- (_Bool)dynamicColorSetterArguments:(id)arguments haveDynamicColorsForObject:(id)object;

@end

#endif /* TFNDynamicColorArraySetterAdapter_h */
