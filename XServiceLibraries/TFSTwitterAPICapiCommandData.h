//
#ifndef TFSTwitterAPICapiCommandData_h
#define TFSTwitterAPICapiCommandData_h
@import Foundation;

@class NSDictionary, NSObject, NSString;

@interface TFSTwitterAPICapiCommandData : NSObject

@property (copy, nonatomic) NSString *capiPath;
@property (readonly, copy, nonatomic) NSDictionary *parameters;

/* instance methods */
- (id)initWithCapiURLString:(id)urlstring parameters:(id)parameters;

@end

#endif /* TFSTwitterAPICapiCommandData_h */
