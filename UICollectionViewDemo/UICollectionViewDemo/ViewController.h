//
//  ViewController.h
//  UICollectionViewDemo
//
//  Created by holyenzou on 14/11/14.
//  Copyright (c) 2014年 holyenzou. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;


@end

