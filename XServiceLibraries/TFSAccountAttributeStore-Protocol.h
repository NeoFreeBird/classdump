//
#ifndef TFSAccountAttributeStore_Protocol_h
#define TFSAccountAttributeStore_Protocol_h
@import Foundation;

@protocol TFSAccountAttributeStore

@required

/* required instance methods */
- (_Bool)save:(id)save error:(id *)error;
- (id)loadAndReturnError:(id *)error;

@optional

@end

#endif /* TFSAccountAttributeStore_Protocol_h */
