//
#ifndef T1InlineMediaViewModel_Protocol_h
#define T1InlineMediaViewModel_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"

@class NSString, TAVPlayerSessionProducer;

@protocol T1InlineMediaViewModel <NSObject>

@required

@property (readonly, nonatomic) TAVPlayerSessionProducer *playerSessionProducer;
@property (readonly, nonatomic) id <TVPPlayerSessionSource> playerSessionSource;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) unsigned long long playerIconViewType;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } pillViewTime;
@property (readonly, nonatomic) _Bool watchAgainButtonEnabled;
@property (readonly, nonatomic) _Bool shouldShowAdCountdownForQuotedTweet;
@property (readonly, nonatomic) NSString *vanityURLString;
@property (readonly, nonatomic) NSString *vanityTitle;
@property (readonly, nonatomic) _Bool shouldShowLoadingIndicator;
@property (readonly, nonatomic) NSString *adDisplayLocation;

@optional

@end

#endif /* T1InlineMediaViewModel_Protocol_h */
