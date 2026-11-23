//
#ifndef _TtC14WorkExperience19WorkExperienceStore_h
#define _TtC14WorkExperience19WorkExperienceStore_h
@import Foundation;

@class Swift.Bool, WorkExperience.WorkExperiencePickedLogo _$s_ -> WorkExperience.WorkExperienceCompanyLogo _$stScMYcc, WorkExperience.WorkExperienceRepository, WorkExperience.WorkExperienceViewerListPersistence, _$sSDySS WorkExperience.WorkExperienceStore.LoadedList, _$sSDySSScT -> WorkExperience.WorkExperienceStore.ReadOutcome _$ss5NeverOMn, _$sSDySSScTyyt _$ss5NeverOMn, _$sSDySSSdG, _$sSS, _$sSS WorkExperience.WorkExperiencePickedLogo _$sYaYbKcSg, _$sSd, _$sSdyc, _$sShySSG, _$sSi, _$ss6UInt64VMn, _$sySdYaYbKc, _TtCs12_SwiftObject;

@interface WorkExperience.WorkExperienceStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String viewerUserID;
    Swift.Bool isEditingUnavailable;
    Swift.Int acceptedViewerWriteCount;
    WorkExperience.WorkExperienceRepository repository;
    Swift.String WorkExperience.WorkExperiencePickedLogo _$sYaYbKcSg uploadLogo;
    WorkExperience.WorkExperiencePickedLogo  first-element-marker  -> WorkExperience.WorkExperienceCompanyLogo _$stScMYcc didSaveLogo;
    WorkExperience.WorkExperienceViewerListPersistence persistence;
    Swift.Double timeToLive;
    Swift.Double failureBackoff;
    Swift.Double retryDelay;
    Swift.Int capacity;
    () -> Swift.Double uptimeCountingSleep;
    @Sendable (Swift.Double) async throws -> () sleep;
    WorkExperience.WorkExperienceEvent function type (escaping) report;
    Swift.Dictionary empty-list Swift.String WorkExperience.WorkExperienceStore.LoadedList listsByUserID;
    nominal type descriptor for Swift.UInt64 useCount;
    [Swift.String : Swift.Double] loadFailureUptimesByUserID;
    Swift.Set<Swift.String> userIDsAskedForDuringBackoff;
    Swift.Dictionary empty-list Swift.StringSwift.Task -> WorkExperience.WorkExperienceStore.ReadOutcome nominal type descriptor for Swift.Never loadsInFlight;
    Swift.Dictionary empty-list Swift.StringSwift.Task empty-list () nominal type descriptor for Swift.Never scheduledReadsByUserID;
    Swift.Int viewerWriteCount;
}

@end

#endif /* _TtC14WorkExperience19WorkExperienceStore_h */
