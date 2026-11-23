//
#ifndef _TtC32TwitterHomeFeatureImplementation36TimelineEngineSelectingStreamFactory_h
#define _TtC32TwitterHomeFeatureImplementation36TimelineEngineSelectingStreamFactory_h
@import Foundation;

#include "THMURTHomeTimelineStreamFactoryProtocol-Protocol.h"

@class NSObject, TwitterHomeFeatureImplementation.URTHomeTimelineStreamFactory, _$sSo28TFSDatabaseUIApplicationLinkC, _$sSo40TwitterHomeFeaturesConfigurationProtocol_p;

@interface TwitterHomeFeatureImplementation.TimelineEngineSelectingStreamFactory : NSObject <THMURTHomeTimelineStreamFactoryProtocol> { // (Swift)
    /* instance variables */
    __C.TFSDatabaseUIApplicationLink applicationLink;
    __C.TwitterHomeFeaturesConfigurationProtocol homeConfiguration;
    TwitterHomeFeatureImplementation.URTHomeTimelineStreamFactory legacyFactory;
}

/* instance methods */
- (id)initWithApplicationLink:(id)link homeConfiguration:(id)configuration;
- (id)createWithAccount:(id)account;
- (id)init;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation36TimelineEngineSelectingStreamFactory_h */
