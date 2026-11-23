//
#ifndef _TtC10XElections23ElectionsRaceListRouter_h
#define _TtC10XElections23ElectionsRaceListRouter_h
@import Foundation;

@class XElections.ElectionsAdStore ?, XElections.ElectionsChatContent _$sSgSSScMYcc, XElections.ElectionsLiveResultsStore, XElections.ElectionsScribe, XElections.ElectionsShareActions, _$s20TwitterActionService0bC0CMn, _$sSS, _$sSo16TIPImagePipelineCSg, _$sSo16UIViewControllerCSS_ XElections.ElectionsFeedKind XElections.ElectionsFeedSurface _$sSo0A0CSgtScMYcc, _$sySS_SSSo16UIViewControllerCtScMYcc, _$sySo16UIViewControllerCScMYccSg, _TtCs12_SwiftObject;

@interface XElections.ElectionsRaceListRouter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String electionID;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    __C.TIPImagePipeline? imagePipeline;
    XElections.ElectionsLiveResultsStore liveResults;
    XElections.ElectionsAdStore ? ads;
    __C.UIViewControllerSwift.String first-element-marker  XElections.ElectionsFeedKind XElections.ElectionsFeedSurface _$sSo0A0CSgtScMYcc makeFeed;
    XElections.ElectionsChatContent _$sSgSSScMYcc makeChat;
    @Swift.MainActor (Swift.String, Swift.String, __C.UIViewController) -> () openProfile;
    (@Swift.MainActor (__C.UIViewController) -> ())? openDataProvider;
    XElections.ElectionsShareActions share;
    XElections.ElectionsScribe scribe;
}

@end

#endif /* _TtC10XElections23ElectionsRaceListRouter_h */
