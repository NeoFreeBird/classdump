//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16GrokMarkdownCore19MarkdownEnvironment_h
#define _TtC16GrokMarkdownCore19MarkdownEnvironment_h
@import Foundation;

@class GrokMarkdownCore.MarkdownGates, GrokMarkdownCore.MarkdownLogEvent _$sYbc ->, GrokMarkdownCore.MarkdownTelemetryEvent _$sYbc ->, Swift.Bool, _$s7Combine12AnyPublisherVMn _$sySb _$ss5NeverOMn, _$sSd, _TtCs12_SwiftObject;

@interface GrokMarkdownCore.MarkdownEnvironment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GrokMarkdownCore.MarkdownGates gates;
    GrokMarkdownCore.MarkdownLogEvent _$sYbc -> log;
    GrokMarkdownCore.MarkdownTelemetryEvent _$sYbc -> track;
    Swift.Bool wrapsCodeBlocksByDefault;
    nominal type descriptor for Combine.AnyPublisher  empty-list Swift.Bool nominal type descriptor for Swift.Never codeBlockWrapChanges;
    Swift.Double streamingUpdateInterval;
}

@end

#endif /* _TtC16GrokMarkdownCore19MarkdownEnvironment_h */
