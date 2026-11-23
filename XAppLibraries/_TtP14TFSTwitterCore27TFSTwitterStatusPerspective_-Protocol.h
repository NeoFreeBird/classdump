//
#ifndef _TtP14TFSTwitterCore27TFSTwitterStatusPerspective__Protocol_h
#define _TtP14TFSTwitterCore27TFSTwitterStatusPerspective__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TAPTweetPerspective;

@protocol TFSTwitterCore.TFSTwitterStatusPerspective <NSObject>

@required

@property (readonly, nonatomic) id <TAPTweetPerspective> perspective;

@optional

@end

#endif /* _TtP14TFSTwitterCore27TFSTwitterStatusPerspective__Protocol_h */
