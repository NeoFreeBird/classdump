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
