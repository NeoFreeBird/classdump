//
#ifndef TFSAccountProtocol_Protocol_h
#define TFSAccountProtocol_Protocol_h
@import Foundation;

#include "TFSAccountIdentifiable-Protocol.h"

@class NSObject;

@protocol TFSAccountProtocol <TFSAccountIdentifiable>

@required

@property (nonatomic, readonly) NSObject *identifier;

@property (class, nonatomic, readonly) NSString *accountType;

/* class methods */
+ (id)accountType;

@optional

@end

#endif /* TFSAccountProtocol_Protocol_h */
