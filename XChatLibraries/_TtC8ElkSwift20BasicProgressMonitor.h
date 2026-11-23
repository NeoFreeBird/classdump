//
#ifndef _TtC8ElkSwift20BasicProgressMonitor_h
#define _TtC8ElkSwift20BasicProgressMonitor_h
@import Foundation;

@class ElkSwift.IElkProgressMonitor ?, Swift.Bool, _$s10Foundation3URLVMn ?, _$sSS, _$sSa -> ElkSwift.IElkProgressMonitor, _$sSa -> ElkSwift.LoggedGraph, _$sSaySSG, _$sSd, _$sSdSg, _$sSf, _$sSi, _TtCs12_SwiftObject;

@interface ElkSwift.BasicProgressMonitor : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ElkSwift.IElkProgressMonitor ? _parentMonitor;
    Swift.Array -> ElkSwift.IElkProgressMonitor _children;
    Swift.Int maxLevels;
    Swift.String _taskName;
    Swift.Bool closed;
    Swift.Float _totalWork;
    Swift.Float completedWork;
    Swift.Float currentChildWork;
    Swift.Bool recordLogs;
    Swift.Bool persistLogs;
    [Swift.String] _logMessages;
    Swift.Array -> ElkSwift.LoggedGraph _logGraphs;
    nominal type descriptor for Foundation.URL ? _debugFolder;
    nominal type descriptor for Foundation.URL ? logFile;
    Swift.Bool recordExecutionTime;
    Swift.Double? startTime;
    Swift.Double _totalTime;
}

@end

#endif /* _TtC8ElkSwift20BasicProgressMonitor_h */
