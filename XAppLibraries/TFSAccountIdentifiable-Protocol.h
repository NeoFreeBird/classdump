//
#ifndef TFSAccountIdentifiable_Protocol_h
#define TFSAccountIdentifiable_Protocol_h
@import Foundation;

@class NSObject;

@protocol TFSAccountIdentifiable

@required

@property (nonatomic, readonly) NSObject *identifier;

@optional

@end

#endif /* TFSAccountIdentifiable_Protocol_h */
