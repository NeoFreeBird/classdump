//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef JetXRuntimeObjC_h
#define JetXRuntimeObjC_h
@import Foundation;

@class NSObject;

@interface JetXRuntimeObjC : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *runtime;
}

/* instance methods */
- (void)updateStringAtomWithKey:(id)key value:(id)value;
- (void)updateIntAtomWithKey:(id)key value:(long long)value;
- (void)updateBoolAtomWithKey:(id)key value:(_Bool)value;
- (void)updateDoubleAtomWithKey:(id)key value:(double)value;
- (void)updateURLAtomWithKey:(id)key value:(id)value;
- (void)updateDateAtomWithKey:(id)key value:(id)value;
- (void)updateEnumAtomWithKey:(id)key value:(long long)value;
- (void)updateStringArrayAtomWithKey:(id)key value:(id)value;
- (void)updateIntArrayAtomWithKey:(id)key value:(id)value;
- (void)updateDoubleArrayAtomWithKey:(id)key value:(id)value;
- (void)updateBoolArrayAtomWithKey:(id)key value:(id)value;
- (void)updateStringDictAtomWithKey:(id)key value:(id)value;
- (void)updateFormFieldAtomWithKey:(id)key name:(id)name value:(id)value;
- (id)init;

@end

#endif /* JetXRuntimeObjC_h */
