//
#ifndef _TtC4Grok24GrokGatewayModelsService_h
#define _TtC4Grok24GrokGatewayModelsService_h
@import Foundation;

@class Grok.GrokGatewayModesFetching, _$s7Combine18PassthroughSubjectCMn _$ss5Int64VMn _$ss5NeverOMn, _$sSD -> _$ss5Int64VMn Grok.GrokGatewayModelsService.FetchContext, _$sSD -> _$ss5Int64VMn Grok.GrokGatewayModelsService.LoadedModels, _$sSD -> _$ss5Int64VMn _$s10Foundation4DateVMn, _$sSD -> _$ss5Int64VMn _$sScTyyt _$ss5NeverOMn, _$sSD -> _$ss5Int64VMn _$ss6UInt64VMn, _TtCs12_SwiftObject;

@interface Grok.GrokGatewayModelsService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.PassthroughSubject nominal type descriptor for Swift.Int64 nominal type descriptor for Swift.Never didChange;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 Grok.GrokGatewayModelsService.LoadedModels loadedModelsByUserID;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 Swift.Task empty-list () nominal type descriptor for Swift.Never fetchTasksByUserID;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 Grok.GrokGatewayModelsService.FetchContext fetchContextsByUserID;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 nominal type descriptor for Swift.UInt64 requestGenerationsByUserID;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 nominal type descriptor for Foundation.Date degradedResultDatesByUserID;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 nominal type descriptor for Foundation.Date lastDegradedRefetchDatesByUserID;
    Grok.GrokGatewayModesFetching fetcher;
}

@end

#endif /* _TtC4Grok24GrokGatewayModelsService_h */
