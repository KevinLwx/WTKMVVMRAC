//
//  WTKRecommendViewModel.h
//  WTKWineMVVM
//
//  Created by 王同科 on 16/10/8.
//  Copyright © 2016年 王同科. All rights reserved.
//

#import "WTKBasedViewModel.h"

@interface WTKRecommendViewModel : WTKBasedViewModel

@property(nonatomic,strong)RACCommand *refershCommand;

@property(nonatomic,strong)RACCommand *shareCommand;

@end
