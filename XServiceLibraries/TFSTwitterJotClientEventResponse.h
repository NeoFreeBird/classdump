//
#ifndef TFSTwitterJotClientEventResponse_h
#define TFSTwitterJotClientEventResponse_h
@import Foundation;

@class NSDictionary, NSObject;

@interface TFSTwitterJotClientEventResponse : NSObject

@property (retain, nonatomic) NSDictionary *debugInfo;

/* class methods */
+ (id)debugResponseWithJSONData:(id)jsondata error:(out id *)error;

/* instance methods */
- (id)initWithDebugInfoDictionary:(id)dictionary;
- (id)init;

@end

#endif /* TFSTwitterJotClientEventResponse_h */
