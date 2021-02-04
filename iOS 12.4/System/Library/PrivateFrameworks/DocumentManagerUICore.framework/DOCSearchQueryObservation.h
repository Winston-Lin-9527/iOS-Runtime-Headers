/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DOCQueryObservation.h>

@class DOCItemQueryCollector;

@interface DOCSearchQueryObservation : DOCQueryObservation {

	DOCItemQueryCollector* _searchCollector;

}

@property (retain) DOCItemQueryCollector * searchCollector;              //@synthesize searchCollector=_searchCollector - In the implementation block
-(DOCItemQueryCollector *)searchCollector;
-(void)setSearchCollector:(DOCItemQueryCollector *)arg1 ;
@end
