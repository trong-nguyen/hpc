from multiprocessing import Pool, Process
import os

def f():
	print 'I am thread id {}'.format(os.getppid())

if __name__ == '__main__':
	pool = Pool(processes=16)
	pool.apply_async(f)