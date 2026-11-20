//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAmplifyProgram_h
#define PTVAmplifyProgram_h
@import Foundation;

@class NSObject, NSString;

@interface PTVAmplifyProgram : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *ID;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;

@end

#endif /* PTVAmplifyProgram_h */
