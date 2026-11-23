//
#ifndef _TtC15PollCardDisplay24PollCardDisplayViewModel_h
#define _TtC15PollCardDisplay24PollCardDisplayViewModel_h
@import Foundation;

@class PollCardDisplay.PollCardAPIClientProtocol, PollCardDisplay.PollCardAPIData ?, PollCardDisplay.PollCardDisplayConfiguration, PollCardDisplay.PollCardVotePersistenceServiceProtocol, PollCardShared0aB14ScribeProtocol_pSg, Swift.Bool, _$s11Observation0A9RegistrarVMn, _$sSDySi __C.CGRect, _$sSiSg, _$sySi_ __C.CGRect _$stcSg, _$sySicSg, _TtCs12_SwiftObject;

@interface PollCardDisplay.PollCardDisplayViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool _shouldShowOptionsInList;
    Swift.Int? _votingChoiceIndex;
     empty-list Swift.Int first-element-marker  __C.CGRect _$stcSg _onMediaTapped;
    ((Swift.Int) -> ())? _onVoteSubmitted;
    Swift.Dictionary empty-list Swift.Int __C.CGRect mediaFramesByOriginalIndex;
    PollCardDisplay.PollCardAPIClientProtocol pollCardAPIClient;
    PollCardDisplay.PollCardAPIData ? _apiData;
    PollCardDisplay.PollCardVotePersistenceServiceProtocol _persistenceService;
    PollCardShared0aB14ScribeProtocol_pSg _scribeHandler;
    PollCardDisplay.PollCardDisplayConfiguration _configuration;
    Swift.Bool _hasLoggedVotingViewImpression;
    Swift.Bool _hasLoggedResultsViewImpression;
    nominal type descriptor for Observation.ObservationRegistrar _$observationRegistrar;
}

@end

#endif /* _TtC15PollCardDisplay24PollCardDisplayViewModel_h */
