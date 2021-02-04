/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKCGColorProvider.h>

@class TSKAnnotationAuthor, NSString;

@interface TSKAnnotationAuthorTextHighlightColorProvider : NSObject <TSKCGColorProvider> {

	TSKAnnotationAuthor* mAnnotationAuthor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAnnotationAuthor:(id)arg1 ;
-(void)dealloc;
-(CGColorRef)cgColor;
@end
