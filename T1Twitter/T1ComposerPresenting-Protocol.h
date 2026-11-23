//
#ifndef T1ComposerPresenting_Protocol_h
#define T1ComposerPresenting_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol T1ComposerPresenting <NSObject>

@required

@optional

@property (readonly, copy, nonatomic) NSString *presentComposerPlaceholderText;

/* optional instance methods */
- (void)presentComposer;
- (void)presentFleetComposer;
- (void)presentDrafts;
- (void)presentNewsCamera;
- (void)presentGIFSearchComposer;
- (void)presentSpaceComposer;

@end

#endif /* T1ComposerPresenting_Protocol_h */
