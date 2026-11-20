//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVCallbackObject_h
#define PTVCallbackObject_h
@import Foundation;

@class NSObject;

@interface PTVCallbackObject : NSObject

@property (retain, nonatomic) id context;
@property (copy, nonatomic) id /* block */ eventual;
@property (copy, nonatomic) id /* block */ error;

/* class methods */
+ (id)objectWithEventual:(id /* block */)eventual error:(id /* block */)error context:(id)context;

/* instance methods */

@end

#endif /* PTVCallbackObject_h */
