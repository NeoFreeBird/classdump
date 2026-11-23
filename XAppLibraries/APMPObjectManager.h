//
#ifndef APMPObjectManager_h
#define APMPObjectManager_h
@import Foundation;

@class NSObject, NSPointerArray;

@interface APMPObjectManager : NSObject {
    /* instance variables */
    NSPointerArray *_roots;
    NSPointerArray *_objects;
}

/* class methods */
+ (id)functionValueWithFunctionName:(id)name parameterNames:(id)names statements:(id)statements definingScope:(id)scope;
+ (id)mapValueWithScope:(id)scope;
+ (id)arrayValueWithScope:(id)scope;
+ (id)arrayValueWithArray:(id)array scope:(id)scope;
+ (id)subarrayWithArray:(id)array range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range scope:(id)scope;

/* instance methods */
- (id)init;
- (void)addRoot:(id)root;
- (void)addObject:(id)object;
- (void)collectGarbage;
- (void)mark;
- (void)sweep;
- (id)trackedObjects;
- (id)roots;

@end

#endif /* APMPObjectManager_h */
