/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class FULabel;

@interface FULoadingView : UIView {

	FULabel* _loadingLabel;

}

@property (retain) FULabel * loadingLabel;              //@synthesize loadingLabel=_loadingLabel - In the implementation block
-(id)init;
-(void)setStyleProvider:(id)arg1 ;
-(FULabel *)loadingLabel;
-(void)setLoadingLabel:(FULabel *)arg1 ;
@end
